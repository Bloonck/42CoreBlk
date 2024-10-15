/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 12:55:13 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/07/02 17:43:04 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	const char	*main;
	const char	*set;
	size_t		index;

	main = (const char *)str;
	set = (const char *)to_find;
	index = 0;
	if (!set[0])
		return ((char *)main);
	if (!len)
		return (NULL);
	if (*set == '\0')
		return ((char *)main);
	while (*main != '\0' && index <= len - ft_strlen(set))
	{
		if (ft_strncmp(main, set, ft_strlen(set)) == 0)
			return ((char *)main);
		index++;
		main++;
	}
	return (NULL);
}
