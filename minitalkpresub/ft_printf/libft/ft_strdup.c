/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 13:03:20 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/06/20 12:59:25 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, char *str1)
{
	int	i;

	i = 0;
	while (str1[i] != '\0')
	{
		dest[i] = str1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*destarr;

	destarr = malloc(ft_strlen(src) + 1);
	if (!destarr)
		return (NULL);
	ft_strcpy(destarr, src);
	return (destarr);
}
