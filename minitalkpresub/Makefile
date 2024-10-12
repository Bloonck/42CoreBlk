# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/09 12:29:52 by zbin-md-          #+#    #+#              #
#    Updated: 2024/10/12 14:49:17 by zbin-md-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=			minitalk

#~~~~~~~~~~~~~~~~ Variables ~~~~~~~~~~~~~~~~~#

COMP			:=			gcc

CFLAGS			:=			-Wall -Werror -Wextra

REMOVE			:=			rm -rf

SRC_DIR			:=			src/

OBJ_DIR			:=			obj/

BONUS_DIR		:=			bonus/

SERVER			:=			server

CLIENT			:=			client

SERVER_BONUS	:=			server_bonus

CLIENT_BONUS	:=			client_bonus

FTPRINTF		:=			ft_printf/

HEADER			:=			includes/

#~~~~~~~~~~~~~~~~ Sources ~~~~~~~~~~~~~~~~~~~#

SERVER_SRCS := $(wildcard $(SRC_DIR)server.c)

CLIENT_SRCS := $(wildcard $(SRC_DIR)client.c $(SRC_DIR)utils.c)

BONUS_SERVER_SRCS	:=	$(wildcard $(BONUS_DIR)server.c)

BONUS_CLIENT_SRCS	:=	$(wildcard $(BONUS_DIR)client.c $(BONUS_DIR)utils.c)

BONUS_SERVER_OBJS 	:=	$(BONUS_SERVER_SRCS:.c=.o)

BONUS_CLIENT_OBJS 	:=	$(BONUS_CLIENT_SRCS:.c=.o)

#~~~~~~~~~~~~~~~~ Recipes ~~~~~~~~~~~~~~~~~~~#

all:	$(SERVER) $(CLIENT)

bonus:	$(SERVER_BONUS) $(CLIENT_BONUS)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
		@$(COMP) $(CFLAGS) -c $< -o $@
		@echo "Compiling $<..."

$(SERVER): $(OBJ_DIR)server.o
		@$(MAKE) -C $(FTPRINTF)
		@$(COMP) $(CFLAGS) $< -o $@ $(FTPRINTF)libftprintf.a
		@echo "Compiling Server..."
		@echo "compiling printf"

$(CLIENT):	$(OBJ_DIR)client.o $(OBJ_DIR)utils.o
		@$(COMP) $(CFLAGS) $^ -o $@ $(HEADER)minitalk.h
		@echo "Compiling Client..."

$(SERVER_BONUS):	$(SERVER_BONUS_SRCS)
		@$(COMP) $(CFLAGS) $^ -o $@
		@echo "Compiling Server Bonus..."

$(CLIENT_BONUS):	$(CLIENT_BONUS_SRCS)
		@$(COMP) $(CFLAGS) $^ -o $@
		@echo "Compiling Client Bonus..."

clean:
	@$(REMOVE) $(OBJ_DIR)*.o
	@echo "Cleaned!"

fclean: clean
	@$(REMOVE) $(SERVER_BONUS) $(CLIENT_BONUS) $(SERVER) $(CLIENT)
	@echo "Full Cleaned!"

re: fclean all

.PHONY: all, clean, fclean, re
