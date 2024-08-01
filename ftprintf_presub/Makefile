# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zbin-md- <zbin-md-@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/30 16:21:57 by zbin-md-          #+#    #+#              #
#    Updated: 2024/07/31 17:33:20 by zbin-md-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#~~~~~~~~~~~~~~~~~ Variables ~~~~~~~~~~~~~~~~~~~#

NAME		=	libftprintf.a

HEADER		=	headers

LIBFT		=	libft

SRCS_DIR	=	srcs/

OBJS_DIR	=	objs/

COMP		=	gcc

COMPFLAGS	=	-Wextra	-Werror	-Wall -I

AR			=	ar rcs

RM			=	rm -rf

#~~~~~~~~~~~~~~~ Source Files ~~~~~~~~~~~~~~~~~#

SRCS_FILES	=	ft_printf ft_print_basic ft_printhex ft_printuint ft_printptr

SRCS		=	$(addprefix $(SRCS_DIR), $(addsuffix .c, $(SRCS_FILES)))
OBJS		=	$(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRCS_FILES)))

#~~~~~~~~~~~~~~~~~ Recipes ~~~~~~~~~~~~~~~~~~~#

OBJCHECK	=	.cache_exists 		#This file isnt actually created, 
									#It's just here to create a dependency

all:	$(NAME)

$(NAME):	$(OBJS)

		@make -C $(LIBFT)
		@cp $(LIBFT)/libft.a .
		@mv libft.a $(NAME)
		@$(AR) $(NAME) $(OBJS)
		@echo "~~~~~~~ Compilation done! ~~~~~~~"

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c | $(OBJCHECK)

		@echo "~~~~~~~ Compiling... ~~~~~~~"
		@$(COMP) $(COMPFLAGS) $(HEADER) -c $< -o $@

$(OBJCHECK):

		@mkdir -p $(OBJS_DIR)

clean:

		@$(RM) $(OBJS_DIR)
		@make clean -C $(LIBFT)
		@echo "~~~~~~~ Cleaned Objects! ~~~~~~~"

fclean: clean

		@$(RM) $(NAME)
		@$(RM) $(OBJS_DIR)	
		@echo "~~~~~~~ Cleaned Archive! ~~~~~~~"

re:	fclean all

.PHONY: all, clean, fclean, re
