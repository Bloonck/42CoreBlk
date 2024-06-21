/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 18:48:38 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/06/21 15:40:14 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *destination, const void *source, size_t bytesize)
{
	unsigned char	*destpointer;
	unsigned char	*srcpointer;

	destpointer = (unsigned char *)destination;
	srcpointer = (unsigned char *)source;
	if (bytesize == 0)
		return (destination);
	if (destpointer < srcpointer)
	{
		while (bytesize-- > 0)
		{
			*destpointer++ = *srcpointer++;
		}
	}
	else
	{
		destpointer += bytesize - 1;
		srcpointer += bytesize - 1;
		while (bytesize-- > 0)
		{
			*destpointer-- = *srcpointer--;
		}
	}
	return (destination);
}

/*
#include <stdio.h>
int	main()
{
	char testsrc[20] = "This is a string!?";
	char testdest[20];

	ft_memmove(testdest, testsrc, 20);
	printf("Result: %s\n", testdest);
}*/
