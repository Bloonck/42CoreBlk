# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/09 12:29:52 by zbin-md-          #+#    #+#              #
#    Updated: 2024/10/09 20:59:17 by zbin-md-         ###   ########.fr        #
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

SERVER_SRCS			=			$(addprefix $(SRC_DIR), $(addsuffix .c, $(SERVER_FILES)))

SERVER_OBJS			=			$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SERVER_FILES)))

CLIENT_SRCS			=			$(addprefix $(SRC_DIR), $(addsuffix .c, $(CLIENT_FILES)))

CLIENT_OBJS			=			$(addprefix $(OBJ_DIR), $(addsuffix .o, $(CLIENT_FILES)))

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
