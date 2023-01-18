# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esordone <esordone@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 15:02:45 by esordone          #+#    #+#              #
#    Updated: 2023/01/18 12:03:07 by esordone         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#-------------------------------------COLORS-----------------------------------#
DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

#-----------------------------------VARIABLES----------------------------------#
NAME = push_swap

SRC = main.c add_lst_back.c new_lst.c last_lst.c

INCLUDE = push_swap.h

OBJ = $(SRC:.c=.o)

LIBFT = libft

CC = gcc

FLAGS = -Wall -Werror -Wextra

CLEAN = rm -rf

HEADER = libft.h

#-------------------------------------RULES------------------------------------#
%.o : %.c $(INCLUDE) Makefile
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "$(YELLOW)compiling: $< $(DEF_COLOR)"

all: makelibft $(NAME)

makelibft :
	@$(MAKE) -C $(LIBFT) bonus
	@echo "$(YELLOW)Libft compiled!$(DEF_COLOR)"
	
$(NAME): $(OBJ) libft/libft.a
	@$(CC) $(FLAGS) $(OBJ) libft/libft.a -o $(NAME)

clean:
	@$(CLEAN) $(OBJ)
	@cd libft && make clean
	@echo "$(RED)Object files cleaned!$(DEF_COLOR)"

fclean: clean
	@$(CLEAN) $(NAME)
	@cd libft && make fclean
	@echo "$(CYAN)Executables files cleaned!$(DEF_COLOR)"

re: fclean all
	@echo "$(GREEN)Everything have been remake!$(DEF_COLOR)"

.PHONY: all makelibft clean fclean re
