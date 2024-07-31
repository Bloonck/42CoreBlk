/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:53:15 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/06/19 11:10:14 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *destination, const void *source, size_t bytesize)
{
	void	*sourcepointer;
	void	*destinationpointer;

	sourcepointer = (char *)source;
	destinationpointer = (char *)destination;
	if (!destination && !source)
		return (NULL);
	while (bytesize-- > 0)
	{
		*(char *)destinationpointer = *(char *)sourcepointer;
		sourcepointer++;
		destinationpointer++;
	}
	return (destination);
}
