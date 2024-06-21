/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:56:14 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/06/14 18:28:18 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(char *string, int character)
{
	while (*string != '\0' && *string != (char)character)
		string++;
	if (*string == (char)character)
		return ((char *)string);
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
