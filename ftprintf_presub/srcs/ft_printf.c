/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 14:48:54 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/07/31 16:19:23 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	format_printlist(va_list args, const char format)
{
	int	printlen;

	printlen = 0;
	if (format == 'c')
		printlen += ft_printchar(var_arg(args, int));
	if (format == 's')
		printlen += ft_printstr(var_arg(args, char *));
	if (format == 'p')
		printlen += ft_printptr(var_arg(args, unsigned long long));
	if (format == 'd' || format == 'i')
		printlen += ft_printnbr(var_arg(args, int));
	if (format == 'u')
		printlen += ft_printuint(var_arg(args, unsigned int));
	if (format == 'x' || format == 'X')
		printlen += ft_printhex(var_arg(args, unsigned int), format);
	if (format == '%')
		printlen += ft_printpercent();
	return (printlen);
}

int	ft_printf(const char *string, ...)
{
	int	i;
	int	printlen;
	va_start args;

	i = 0;
	printlen = 0;
	while (string[i])
	{
		if (string[i] == '%')
			printlen += format_printlist(string[i + 1]);
		else
			printlen += ft_printchar(str[i]);
		i++;
	}
	return (printlen);
}
