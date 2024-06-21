/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:08:16 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/06/20 13:15:36 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *destination, char *source, size_t destsize)
{
	size_t	srclen;
	size_t	n;

	srclen = ft_strlen(source);
	if (destsize == 0)
		return (srclen);
	if (srclen < destsize - 1)
		n = srclen;
	else
		n = destsize - 1;
	ft_memmove(destination, source, n);
	destination[n] = '\0';
	return (srclen);
}
