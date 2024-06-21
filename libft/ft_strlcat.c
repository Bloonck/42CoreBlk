/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 13:01:54 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/06/20 11:54:58 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, unsigned int size)
{
	size_t	destlen;
	size_t	srclen;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (!src || size == 0)
		return (srclen);
	if (destlen + srclen >= size)
		return (destlen + srclen);
	while (*src != '\0' && destlen + 1 < size)
	{
		dest[destlen] = *src;
		destlen++;
		src++;
	}
	dest[destlen] = '\0';
	return (destlen);
}
