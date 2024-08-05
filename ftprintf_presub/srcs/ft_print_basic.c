/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_basic.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 17:11:09 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/08/05 14:00:59 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>

int	ft_printchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printpercent(void)
{
	write(1, "%", 1);
	return (1);
}

int	ft_printstr(char *str)
{
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

int	ft_printnbr(int n)
{
	int		len;
	char	*num;

	num = ft_itoa(n);
	len = ft_printstr(num);
	free(num);
	return (len);
}

/*
#include <stdio.h>
int main()
{
	//Printchar tests
	int reschar1 = ft_printchar('a');
	int reschar2 = ft_printchar('z');
	int reschar3 = ft_printchar('1');
	int reschar4 = ft_printchar('9');

	printf("1st test: %d\n", reschar1);
	printf("2nd test: %d\n", reschar2);
	printf("3rd test: %d\n", reschar3);
	printf("4th test: %d\n", reschar4);

	return (0);
}*/
