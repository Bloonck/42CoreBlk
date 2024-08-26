/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:55:06 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/08/26 22:52:45 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(const char *str1, const char *str2)
{
	char	*result;
	int		total_size;
	int		i;
	int		j;

	i = 0;
	total_size = ft_strlen(str1) + ft_strlen(str2);
	result = malloc(sizeof(char) * (total_size + 1));
	if (!str1 || !str2 || !result)
		return (NULL);
	while (str1[i] != '\0')
	{
		result[i] = str1[i];
		i++;
	}
	j = 0;
	while (str2[j] != '\0')
	{
		result[i] = str2[j];
		i++;
		j++;
	}
	result[total_size] = '\0';
	return (result);
}

char	*ft_strchr(char *string, int character)
{
	while (*string != '\0' && *string != (char)character)
		string++;
	if (*string == (char)character)
		return ((char *)string);
	else
		return (NULL);
}

void	ft_bzero(void *memorypointer, size_t byteamount)
{
	char	*iterationpointer;
	size_t	i;

	i = 0;
	iterationpointer = (char *)memorypointer;
	while (i < byteamount)
	{
		iterationpointer[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*mempointer;

	if (size && count && count > UINT_MAX / size)
		return (NULL);
	mempointer = malloc(count * size);
	if (!mempointer)
		return (NULL);
	if (mempointer != NULL)
	{
		ft_bzero(mempointer, count * size);
		return (mempointer);
	}
	return (NULL);
}

size_t	ft_strlen(const char *str)
{
	int	strcount;

	strcount = 0;
	while (*str != '\0')
	{
		strcount++;
		str++;
	}
	return (strcount);
}
