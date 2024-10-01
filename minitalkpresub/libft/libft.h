/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:57:27 by zbin-md-          #+#    #+#             */
/*   Updated: 2024/08/08 16:21:50 by zbin-md-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

//---------- Type Conversion ----------//
int		ft_atoi(const char *str);
char	*ft_itoa(int n);
//-------------------------------------//

//---------- Case Conversion ----------//
int		ft_tolower(int c);
int		ft_toupper(int c);
//-------------------------------------//

//---------- Is... Functions -----------//
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
//--------------------------------------//

//---------- Memory Setting and Manipulation ----------//
int		ft_memcmp(const void *block1, const void *block2, size_t size);
void	*ft_memchr(const void *memblock, int character, size_t size);
void	*ft_memcpy(void *destination, const void *source, size_t bytesize);
void	*ft_memmove(void *destination, const void *source, size_t bytesize);
void	*ft_memset(void *memoryaddy, int newvalue, size_t byteamount);
void	ft_bzero(void *memorypointer, size_t byteamount);
void	*ft_calloc(size_t count, size_t size);
//-----------------------------------------------------//

//---------- Put Functions ---------//
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int nb, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
//----------------------------------//

//---------- String Manipulation ----------//
char	*ft_strchr(const char *string, int character);
char	*ft_strdup(char *src);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strjoin(const char *s1, const char *s2);
size_t	ft_strlcat(char *dest, const char *src, unsigned int size);
int		ft_strlcpy(char *destination, const char *source, size_t destsize);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2, unsigned int n);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
char	*ft_strrchr(char *string, int character);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(const char *s1, const char *set);
char	**ft_split(const char *s, char c);
//-----------------------------------------//

#endif
