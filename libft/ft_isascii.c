/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 11:45:48 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/06/30 15:46:29 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(char c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int main()
{
	char test1[] = "1234";
	char test2[] = "test";
	char test3[] = "";
	int output1 = ft_isascii(test1);
	int output2 = ft_isascii(test2);
	int output3 = ft_isascii(test3);
	printf("%i \n", output1);
	printf("%i \n", output2);
	printf("%i \n", output3);
	return(0);
} */
