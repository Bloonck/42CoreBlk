/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 19:06:32 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/08/26 23:12:42 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_next_line(int fd, char *read_line)
{
	char	*buffer;
	int		bytes_read;

	if (!read_line)
	   read_line = (ft_calloc(1, 1));
	buffer = calloc(BUFFER_SIZE + 1, sizeof(char));
	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[bytes_read] = 0;
		read_line = cat_this_line(read_line, buffer);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	free(buffer);
	return (read_line);
}

char	*find_next_line(char *buffer)
{
	char	*found_line;
	int		i;
	int		j;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	found_line = ft_calloc((ft_strlen(buffer) - i + 1), sizeof(char));
	i++;
	j = 0;
	while (buffer[i])
		found_line[j++] = buffer[i++];
	free(buffer);
	return (found_line);
}

char	*extract_this_line(char *buffer)
{
	char	*extracted_line;
	int		i;

	i = 0;
	if (!buffer[i])
	   return (NULL);	
	while (buffer[i] && buffer[i] != '\n')
		i++;
	extracted_line = ft_calloc(i + 2, sizeof(char));
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		extracted_line[i] = buffer[i];
		i++;
	}
	if (buffer[i] && buffer[i] == '\n')
		extracted_line[i++] = '\n';
	return (extracted_line);
}

char	*cat_this_line(char *buffer, char *buf)
{
	char	*temp_buff;

	temp_buff = ft_strjoin(buffer, buf);
	free(buffer);
	return (temp_buff);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line_get;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	buffer = read_next_line(fd, buffer);
	if (!buffer)
		return (NULL);
	line_get = extract_this_line(buffer);
	buffer = find_next_line(buffer);
	return (line_get);
}
