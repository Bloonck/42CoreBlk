/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 16:15:42 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/06/19 13:54:06 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *memoryaddy, int newvalue, size_t byteamount)
{
	int				i;
	unsigned char	*memorypointer;

	if (!memoryaddy)
		return (NULL);
	i = 0;
	memorypointer = (unsigned char *)memoryaddy;
	while (byteamount-- > 0)
	{
		memorypointer[i] = (unsigned char)newvalue;
		i++;
	}
	return (memorypointer);
}
