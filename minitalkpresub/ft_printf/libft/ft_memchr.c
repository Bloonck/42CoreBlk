/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:16:41 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/06/14 18:34:26 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *memblock, int character, size_t size)
{
	unsigned char	*mempointer;

	mempointer = (unsigned char *)memblock;
	while (size-- > 0)
	{
		if (*mempointer == (unsigned char)character)
			return ((void *)mempointer);
		mempointer++;
	}
	return (NULL);
}

/*
#include <stdio.h>
int main()
{
	char strtest[20] = "Kung fu kenny now";
	char *strres = ft_memchr(strtest, 'u');
	printf("Result: %s\n", strres);
}*/
