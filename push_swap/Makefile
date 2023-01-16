# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esordone <esordone@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 15:02:45 by esordone          #+#    #+#              #
#    Updated: 2023/01/16 14:38:28 by esordone         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = main.c

INCLUDE = push_swap.h

OBJ = $(SRC:.c=.o)

LIBFT = libft

CC = gcc

FLAGS = -Wall -Werror -Wextra

CLEAN = rm -rf

HEADER = libft.h

%.o : %.c $(INCLUDE) Makefile
	$(CC) $(FLAGS) -c $< -o $@

all: makelibft $(NAME)

makelibft :
	$(MAKE) -C $(LIBFT) bonus
	
$(NAME): $(OBJ) libft/libft.a
	$(CC) $(FLAGS) $(OBJ) libft/libft.a -o $(NAME)

clean:
	$(CLEAN) $(OBJ)
	cd libft && make clean

fclean: clean
	$(CLEAN) $(NAME)
	cd libft && make fclean

re: fclean all

.PHONY: all clean fclean re
