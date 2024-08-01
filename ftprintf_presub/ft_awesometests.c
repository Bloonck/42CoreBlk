/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_awesometests.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:28:28 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/08/01 16:32:19 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>

void	ft_basictests(int testnum)
{
	if (testnum == 1)
		ft_printf("a");
	if (testnum == 2)
		ft_printf("test");
	if (testnum == 3)
		ft_printf("abcdefghijklmnopqrstuvwxyz");
	if (testnum == 4)
		ft_printf("123456789");
	if (testnum == 5)
		ft_printf("ABCDEFGHIJKLMNOP");
	if (testnum == 6)
		ft_printf("AbCDfEsaHDIUivSIU123");
	if (testnum == 7)
		ft_printf("123jfgdsi17ywe");
	if (testnum == 8)
		ft_printf("AAAAAAaaAAAAAAAAAAAaaaaaaaaaaaAAAAAAAAAAAAAAaaaaaaaaaa");
	if (testnum == 9)
		ft_printf("0xEF123989");
	if (testnum == 10)
		ft_printf("!@#$$$^&******()*&^%$$$$###!@#$%^&*");
	if (testnum == 11)
		ft_printf("|||<><?/:}|{}++_+_+_+_!++!_!+_!+!_+~+~_~+_~");
}

int main();
{
	int i;

	i = 0;
	//~~~ Basic Tests ~~~//
	while (i < 12)
	{
		ft_basictests(i);
		i++;
	}
}
