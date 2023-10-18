# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/29 22:33:03 by ioduwole          #+#    #+#              #
#    Updated: 2023/09/29 22:52:06 by ioduwole         ###   ########.fr        #
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
	@echo $(GREEN)"Ex01 compiled"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
