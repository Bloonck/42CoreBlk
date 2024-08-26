/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 19:06:32 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/08/26 14:55:41 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_next_line(int fd, char* read_line)
{
	char	*buffer;
	int		bytes_read;

	if (!read_line)
		return (ft_calloc(1, 1));
	buffer = calloc(BUFFER_SIZE + 1, sizeof(char));

}

char	*find_next_line(char *buffer)
{
	char	*found_line;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}

}

char	*free_this_line(char *buffer, char* buf)
{
	char	*temp_buff;

	temp_buff = ft_strjoin(buffer, buf);
	free(buffer);
	return (temp_buff);
}

