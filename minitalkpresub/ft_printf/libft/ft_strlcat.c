/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 13:01:54 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/07/02 17:22:25 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	size_t	destlen;
	size_t	srclen;
	size_t	i;
	size_t	j;

	srclen = ft_strlen(src);
	i = 0;
	if (!size)
		return (srclen);
	destlen = ft_strlen(dest);
	j = destlen;
	if (size < destlen)
		return (srclen + size);
	while (src[i] && (destlen + i) < size)
		dest[j++] = src[i++];
	if (((destlen + i) == size) && destlen < size)
		dest[--j] = '\0';
	else
		dest[j] = '\0';
	return (srclen + destlen);
}
