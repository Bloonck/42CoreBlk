/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:38:06 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/08/08 14:28:05 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk.h"
#include <stdint.h>
int	numlen(unsigned long long number)
{
	int	length;

	length = 0;
	while (number != 0)
	{
		length++;
		number /= 10;
	}
	return (length);
}

char	*ft_utoa(unsigned long long n)
{
	int		len;
	char	*num;

	len = numlen(n);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return (NULL);
	num[len] = '\0';
	while (n != 0)
	{
		num[len - 1] = (n % 10) + 48;
		n /= 10;
		len--;
	}
	return (num);
}

int	ft_printuint(unsigned long long n)
{
	int		printlen;
	char	*num;

	printlen = 0;
	if (n == 0)
		printlen += write(1, "0", 1);
	else
	{
		num = ft_utoa(n);
		printlen += ft_printstr(num);
		free(num);
	}
	return (printlen);
}
