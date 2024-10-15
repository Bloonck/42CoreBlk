/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 14:31:31 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/06/11 13:58:51 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *string, int character)
{
	char	*stringpointer;
	int		i;

	i = ft_strlen(string);
	stringpointer = string;
	while (i >= 0 && stringpointer[i] != (char)character)
		i--;
	if (stringpointer[i] == (char)character)
		return (stringpointer + i);
	else
		return (NULL);
}

/*
#include <stdio.h>
int main()
{
	char strtest[20] = "Kung fu kenny now";
	char *strres = ft_strrchr(strtest, 'u');
	printf("Result: %s\n", strres);
}*/
