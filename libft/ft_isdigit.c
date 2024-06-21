/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:41:25 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/06/20 17:57:42 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
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
	int output1 = ft_isdigit(test1);
	int output2 = ft_isdigit(test2);
	int output3 = ft_isdigit(test3);
	printf("%i \n", output1);
	printf("%i \n", output2);
	printf("%i \n", output3);
	return(0);
} */
