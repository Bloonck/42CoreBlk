/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:22:50 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/07/29 13:35:45 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static int	hexlen(unsigned int number)
{
	int	length;

	length = 0;
	while (num != 0)
	{
		length++;
		num /= 16;
	}
	return (length);
}

static int	puthex(unsigned int number, const char format)
{
	if (number >= 16)
	{
		puthex(number / 16, format);
		puthex(number % 16, format);
	}
	else
	{
		if (number <= 9)
			ft_putchar_fd(number + '0', 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd(number - 10 + 'a', 1);
			if (format == 'X')
				ft_putchar_fd(number - 10 + 'A', 1);
		}
	}
}

int	ft_printhex(unsigned int number, const char format)
{
	if (number == 0)
		return (write(1, "0", 1));
	else
		puthex(number, format);
	return (hexlen(number));
}
