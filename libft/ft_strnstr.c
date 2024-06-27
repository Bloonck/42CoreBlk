/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:55:13 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/06/26 16:46:48 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	char	*ptofind;
	char	*tempstr;

	if (!to_find || !str || len == 0)
		return (NULL);
	if (*to_find == '\0')
		return (str);
	while (*str != '\0' && len-- > 0)
	{
		tempstr = str;
		ptofind = to_find;
		while ((*ptofind != '\0') && (*tempstr == *ptofind) && len-- > 0)
		{
			ptofind++;
			tempstr++;
		}
		if (*ptofind == '\0')
			return (tempstr - (ptofind - to_find));
		str++;
	}
	return (NULL);
}
