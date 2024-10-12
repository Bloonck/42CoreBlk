/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:20:36 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/06/14 17:26:27 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *memorypointer, size_t byteamount)
{
	unsigned char	*iterationpointer;

	iterationpointer = (unsigned char *)memorypointer;
	while (byteamount-- > 0)
	{
		*iterationpointer = 0;
		iterationpointer++;
	}
}
