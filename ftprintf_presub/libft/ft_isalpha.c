/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:39:17 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/07/02 14:40:47 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int main()
{
	char test1[] = "test";
	char test2[] = "TEST";
	char test3[] = "t3st";
	int output1 = ft_isalpha(test1);
	int output2 = ft_isalpha(test2);
	int output3 = ft_isalpha(test3);
	printf("%i \n", output1);
	printf("%i \n", output2);
	printf("%i \n", output3);
	return(0);
}*/
