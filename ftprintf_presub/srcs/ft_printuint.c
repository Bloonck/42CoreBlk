/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:38:06 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/07/30 15:48:06 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	numlen(int number)
{
	int	length;

	length = 0;
	while (number != 0)
	{
		length++;
		num /= 10;
	}
	return (length);
}

char	*ft_utoa(unsigned int n)
{
	int		len;
	char	*num;

	len = numlen(num);
	num = (char *)malloc(sizeof(char) * len);
	if (!num)
		return (NULL);
	num[len] = '\0';
	while (n != 0)
	{
		num[len - 1] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	return (num);
}

int	ft_printuint(unsigned int n)
{
	int		printlen;
	char	*num;

	printlen = 0;
	if (n == 0)
		printlen += write(1, "0", 1);
	else
	{
		num = ft_utoa(n);
		printlen += ft_putstr_fd(num, 1);
	}
	return (printlen);
}
