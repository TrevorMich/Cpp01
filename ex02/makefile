# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 14:03:55 by ioduwole          #+#    #+#              #
#    Updated: 2023/10/03 14:05:05 by ioduwole         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main

SRC = $(wildcard *.cpp)

OBJ = $(SRC:.cpp = .o)

CC = g++

CFLAGS = -Wall -Werror -Wall -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $(NAME)
	@echo $(GREEN)"Ex02 compiled"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
