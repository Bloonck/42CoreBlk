/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 13:20:29 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/08/21 14:59:24 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>

/*========== UTILITIES ==========*/

char	*ft_strjoin(const char* str1, const char* str2);
char	*ft_strchr(char *string, int character);
void	ft_bzero(void *memorypointer, size_t byteamount);
void	*ft_calloc(size_t count, size_t size);
size_t	ft_strlen(const char *str);

/*===============================*/

/*========== GET_NEXT_LINE ==========*/

char	*read_next_line(int fd, char* read_line);
char	*free_this_line(char *buffer, char* buf);

/*===================================*/
#endif
