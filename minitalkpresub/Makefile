# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/09 12:29:52 by zbin-md-          #+#    #+#              #
#    Updated: 2024/10/09 19:38:57 by zbin-md-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#~~~~~~~~~~~~~~~~ Variables ~~~~~~~~~~~~~~~~~#

COMP			=			gcc

CFLAGS			=			-Wall -Werror -Wextra

REMOVE			=			rm -rf

SRC_DIR			=			src/

OBJ_DIR			=			obj/

SERVER			=			server

CLIENT			=			client

#~~~~~~~~~~~~~~~~ Sources ~~~~~~~~~~~~~~~~~~~#

SRCS			=			$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))

OBJS			=			$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

#~~~~~~~~~~~~~~~~ Recipes ~~~~~~~~~~~~~~~~~~~#

all:	$(SERVER) $(CLIENT)

%.o:	%.c
		$(COMP) $(CFLAGS) -c $< -o $@

clean:
	$(REMOVE) $(OBJS)

fclean: clean
	$(REMOVE) $(SERVER) $(CLIENT)

re: fclean all

.PHONY: all, clean, fclean, re
