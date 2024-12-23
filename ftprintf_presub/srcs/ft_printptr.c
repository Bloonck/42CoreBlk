/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:31:00 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/11/22 16:10:52 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static int	ptrlen(unsigned long long ptr)
{
	int	len;

	len = 0;
	while (ptr != 0)
	{
		len++;
		ptr /= 16;
	}
	return (len);
}

static void	putptr(unsigned long long ptr)
{
	if (ptr >= 16)
	{
		putptr(ptr / 16);
		putptr(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
			ft_putchar_fd(ptr + '0', 1);
		else
			ft_putchar_fd(ptr - 10 + 'a', 1);
	}
}

int	ft_printptr(unsigned long long pointer)
{
	int	outputlen;

	outputlen = 0;
	outputlen += write(1, "0x", 2);
	if (pointer == 0)
		outputlen += (write(1, "0", 1));
	else
	{
		putptr(pointer);
		outputlen += ptrlen(pointer);
	}
	return (outputlen);
}
