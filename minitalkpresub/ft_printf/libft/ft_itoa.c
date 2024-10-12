/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 17:54:18 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/10/10 22:15:31 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <limits.h>

static int	digitcount(long long n)
{
	size_t	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

static char	*makestring(char *resultstr, long number, int len, int negtoggle)
{
	if (number == 0)
		return (ft_strdup("0"));
	else
		resultstr = malloc(sizeof(char) * (len + 1));
	if (!resultstr)
		return (0);
	resultstr[len] = '\0';
	while (--len)
	{
		resultstr[len] = (number % 10) + '0';
		number /= 10;
	}
	if (negtoggle == 1)
		resultstr[0] = '-';
	else
		resultstr[0] = (number % 10) + '0';
	return (resultstr);
}

char	*ft_itoa(int n)
{
	int		len;
	int		negativetoggle;
	char	*returnstring;
	long	number;

	number = n;
	len = digitcount(n);
	returnstring = 0;
	negativetoggle = 0;
	if (n < 0)
		negativetoggle++;
	returnstring = makestring(returnstring, number, len, negativetoggle);
	if (!returnstring)
		return (0);
	return (returnstring);
}
