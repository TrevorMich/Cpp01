# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/29 22:33:23 by ioduwole          #+#    #+#              #
#    Updated: 2023/09/29 22:33:33 by ioduwole         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

SRC = $(wildcard *.cpp)

OBJ = $(SRC:.cpp = .o)

CC = g++

CFLAGS = -Wall -Werror -Wall -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $(NAME)
	@echo $(GREEN)"Ex00 compiled"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re