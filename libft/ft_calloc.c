/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 09:58:58 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/06/30 16:12:38 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mempointer;

	if (count == 0 || size == 0)
		return (NULL);
	mempointer = malloc(count * size);
	if (!mempointer)
		return (NULL);
	if (mempointer != NULL)
	{
		ft_bzero(mempointer, count * size);
		return (mempointer);
	}
	return (NULL);
}
