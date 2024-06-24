/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 17:54:18 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/06/24 19:31:03 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

static int	digitcount(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*numbuffer;
	int		i;
	int		negativesign;
	int		length;

	negativesign = 0;
	length = digitcount(n);
	i = length - 1;
	numbuffer = malloc((length + 1) * sizeof(char));
	if (n < 0)
	{
		n = -n;
		negativesign = 1;
	}
	while (n > 0)
	{
		numbuffer[i--] = (n % 10) + '0';
		n /= 10;
	}
	if (negativesign == 1)
		numbuffer[0] = '-';
	else
		i++;
	numbuffer[length + 1] = '\0';
	return (numbuffer);
}
