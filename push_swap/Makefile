# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esordone <esordone@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 15:02:45 by esordone          #+#    #+#              #
#    Updated: 2023/01/12 15:49:33 by esordone         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

LIB = ar -rsc

SRC = main.c

INCLUDE = push_swap.h

OBJ = $(SRC:.c=.o)

CC = gcc

FLAGS = -Wall -Werror -Wextra

CLEAN = rm -rf

%.o : %.c $(INCLUDE) Makefile
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(LIB) $(NAME) $(OBJ)

clean:
	$(CLEAN) $(OBJ)

fclean: clean
	$(CLEAN) $(NAME)

re: fclean all

.PHONY: all clean fclean re
