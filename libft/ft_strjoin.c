/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 09:55:01 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/06/14 18:55:30 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcat(char *dest, char *src)
{
	char	*destpoint;

	destpoint = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (destpoint);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	length1;
	size_t	length2;
	char	*newstr;

	length1 = ft_strlen((char *)s1);
	length2 = ft_strlen((char *)s2);
	newstr = malloc(sizeof(char) * (length1 + length2 + 1));
	ft_memcpy(newstr, s1, length1 + 1);
	ft_strcat(newstr, (char *)s2);
	return (newstr);
}
/*
#include <stdio.h>
int main()
{
    char *s1 = "Crunchy";
    char *s2 = "Peanuts";
    char *result = ft_strjoin(s1, s2);

    printf("%s\n", result);

    free(result);

    return 0;
}*/
