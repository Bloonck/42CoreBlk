/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:26:04 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/07/02 14:45:59 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	substrcount(const char *s, char delim)
{
	int		count;
	char	*strpoint;

	count = 0;
	strpoint = (char *)s;
	while (*strpoint)
	{
		while (*strpoint == delim)
			++strpoint;
		if (*strpoint)
			++count;
		while (*strpoint && *strpoint != delim)
			strpoint++;
	}
	return (count);
}

static void	arraygen(char **substrarr, const char *str, char delim)
{
	char		**arrayptr;
	char const	*position;

	arrayptr = substrarr;
	position = str;
	while (*position)
	{
		while (*str == delim)
			++str;
		position = str;
		while (*position && *position != delim)
			++position;
		if (*position == delim || position > str)
		{
			*arrayptr = ft_substr(str, 0, position - str);
			str = position;
			++arrayptr;
		}
	}
	*arrayptr = (void *)0;
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	int		size;

	if (!s)
		return (NULL);
	size = substrcount(s, c);
	result = (char **)malloc(sizeof(char *) * (size + 1));
	if (!result)
		return (NULL);
	arraygen(result, s, c);
	return (result);
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
