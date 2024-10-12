# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zbin-md- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/20 17:59:18 by zbin-md-          #+#    #+#              #
#    Updated: 2024/07/31 16:29:09 by zbin-md-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME			=			libft

#~~~~~~~~~~~~~~~~ Sources ~~~~~~~~~~~~~~~~~~~#

MAINSRC			=			ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
							ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
							ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
							ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
							ft_atoi.c ft_calloc.c ft_strdup.c \
							ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
							ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJECTS			=			$(MAINSRC:.c=.o)

#~~~~~~~~~~~~~~~~ Variables ~~~~~~~~~~~~~~~~~#

COMP			=			gcc
CFLAGS			=			-Wall -Werror -Wextra
REMOVE			=			rm -rf

#~~~~~~~~~~~~~~~~ Recipes ~~~~~~~~~~~~~~~~~~~#

all:	$(NAME)

$(NAME):	$(OBJECTS)
			ar -rcs $(NAME).a $(OBJECTS)
%.o:	%.c
		$(COMP) $(CFLAGS) -c $< -o $@

clean:
	$(REMOVE) $(OBJECTS)

fclean: clean
	$(REMOVE) $(NAME).a

re: fclean all

.PHONY: all, clean, fclean, re
