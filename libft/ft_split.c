/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:26:04 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/06/30 15:39:07 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	substrcount(const char *str, char c)
{
	int		i;
	size_t	wordcount;

	i = 0;
	wordcount = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if ((i > 0) && (str[i - 1] != c))
			wordcount++;
		if (str[i])
			i++;
	}
	if ((wordcount == 0) && (str[i - 1] == c))
		return (0);
	if (str[0] == c)
		wordcount++;
	return (wordcount);
}

static char	**arrayalloc(char **substrarr, const char *str, char c)
{
	size_t	substrlen;
	int		substrarrindex;
	int		strindex;

	substrarrindex = 0;
	strindex = 0;
	substrlen = 0;
	while (str[strindex])
	{
		if ((str[strindex] != c))
			substrlen++;
		else if ((strindex > 0) && (str[strindex - 1] != c))
		{
			substrarr[substrarrindex] = malloc(sizeof(char) * (substrlen + 1));
			substrlen = 0;
			substrarrindex++;
		}
		if (str[strindex + 1] == '\0' && str[strindex] != c)
			substrarr[substrarrindex] = malloc(sizeof(char) * (substrlen + 1));
		strindex++;
	}
	return (substrarr);
}

static char	**arraygen(char **substrarr, const char *str, char c)
{
	int	substrarrindex;
	int	substrindex;
	int	strindex;

	substrarrindex = 0;
	substrindex = 0;
	strindex = 0;
	while (str[strindex])
	{
		if (str[strindex] != c)
			substrarr[substrarrindex][substrindex++] = str[strindex];
		else if (str[strindex] > 0 && str[strindex - 1] != c)
		{
			if (strindex != 0)
			{
				substrarr[substrarrindex][substrindex] = '\0';
				substrindex = 0;
				substrarrindex++;
			}
		}
		if (str[strindex] != c && str[strindex + 1] == '\0')
			substrarr[substrarrindex][substrindex] = '\0';
		strindex++;
	}
	return (substrarr);
}

char	**ft_split(const char *s, char c)
{
	char	**strarr;
	int		wordcount;

	if (!s || !*s)
	{
		strarr = malloc(sizeof(char *));
		if (!strarr)
			return (NULL);
		*strarr = (void *)0;
		return (strarr);
	}
	wordcount = substrcount(s, c);
	strarr = malloc(sizeof(char *) * (wordcount + 1));
	if (!strarr)
		return (0);
	if (arrayalloc(strarr, s, c) != 0)
		arraygen(strarr, s, c);
	else
	{
		free(strarr);
		return (NULL);
	}
	strarr[wordcount] = (void *)0;
	return (strarr);
}

/*
#include <stdio.h>
int main() {
    char **arr = ft_split("one,two,three,four", ',');
    if (arr == NULL) 
	{
        printf("Error: ft_split returned NULL\n");
        return 1;
    }

    int i = 0;
    while (arr[i]!= NULL) 
	{
        printf("arr[%d] = %s\n", i, arr[i]);
        i++;
    }

    arrayfree(arr);
    return 0;
}*/
