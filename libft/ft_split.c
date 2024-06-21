/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:26:04 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/06/13 16:13:51 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	substrcount(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			count++;
		i++;
	}
	return (count + 1);
}

static char	*substrextract(char **strp, char c)
{
	char	*substart;
	char	*substr;
	int		sublength;

	substart = *strp;
	while (**strp != c && **strp != '\0')
		(*strp)++;
	sublength = *strp - substart;
	substr = malloc(sizeof(char) * (sublength + 1));
	if (!substr)
	{
		return (NULL);
	}
	ft_memcpy(substr, substart, sublength);
	substr[sublength] = '\0';
	return (substr);
}

static void	arrayfree(char **strarr)
{
	int	i;

	i = 0;
	if (!strarr)
		return ;
	while (strarr[i] != NULL)
		free(strarr[i++]);
	free(strarr);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	char	**strarr;
	char	*strpoint;

	strarr = malloc(sizeof(char *) * substrcount(s, c) + 1);
	if (!strarr)
		return (NULL);
	strarr[substrcount(s, c)] = NULL;
	strpoint = (char *)s;
	i = 0;
	while (i < substrcount(s, c))
	{
		strarr[i++] = substrextract(&strpoint, c);
		if (strarr[i - 1] == NULL)
		{
			arrayfree(strarr);
			return (NULL);
		}
		if (*strpoint == c)
			strpoint++;
	}
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
