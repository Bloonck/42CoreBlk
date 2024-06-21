/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:55:13 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/06/20 13:18:39 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	char	*ptofind;
	char	*tempstr;

	ptofind = to_find;
	if (!to_find || !str)
		return (NULL);
	if (*to_find == '\0')
		return (str);
	while (*str != '\0' && len-- > 0)
	{
		tempstr = str;
		while ((*ptofind != '\0') && (*tempstr == *ptofind))
		{
			ptofind++;
			tempstr++;
		}
		if (*ptofind == '\0')
			return (str);
		str++;
	}
	return (0);
}
