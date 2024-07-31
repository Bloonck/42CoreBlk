/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:01:32 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/06/14 18:56:47 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *block1, const void *block2, size_t size)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	i = 0;
	p1 = (unsigned char *)block1;
	p2 = (unsigned char *)block2;
	while (i < size)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main() 
{
    char block1[] = "hello";
    char block2[] = "hello";
    if (ft_memcmp(block1, block2, sizeof(block1)) != 0) 
	{
        printf("Test 1 failed\n");
        return 1;
    }
	else
		printf("Test 1 passed\n");

    char block3[] = "hello";
    char block4[] = "world";
    if (ft_memcmp(block3, block4, sizeof(block3)) == 0) 
	{
        printf("Test 2 failed\n");
        return 1;
    }
	else
	printf("Test 2 passed\n");

    char block5[] = "hello";
    char block6[] = "hello world";
    if (ft_memcmp(block5, block6, sizeof(block5)) == 0) 
	{
        printf("Test 3 failed\n");
        return 1;
    }
	else
	printf("Test 3 passed\n");

    char block7[] = "hello\0world";
    char block8[] = "hello\0foo";
    if (ft_memcmp(block7, block8, sizeof(block7)) != 0) 
	{
        printf("Test 4 failed\n");
        return 1;
    }
	else
	printf("Test 4 passed\n");
}*/
