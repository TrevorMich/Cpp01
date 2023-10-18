# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/04 14:33:18 by ioduwole          #+#    #+#              #
#    Updated: 2023/10/04 14:33:18 by ioduwole         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

SRC = $(wildcard *.cpp)

OBJ = $(SRC:.cpp=.o)

CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo $(GREEN)"Ex04 compiled"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME) infile infile.replace

re: fclean all

.PHONY: all clean fclean re