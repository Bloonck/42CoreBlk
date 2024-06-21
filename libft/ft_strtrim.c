/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:13:17 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/06/14 19:24:24 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	const char	*front;
	const char	*rear;
	char		*result;

	front = s1;
	rear = s1 + ft_strlen((char *)s1) - 1;
	if (!s1 || !set)
		return (NULL);
	while (ft_strchr((char *)set, *front) != NULL)
	{
		front++;
	}
	while (ft_strchr((char *)set, *rear) != NULL)
	{
		rear--;
	}
	result = malloc(sizeof(char) * (rear - front + 2));
	ft_memcpy(result, front, (rear - front + 1));
	result[rear - front + 1] = '\0';
	return (result);
}
