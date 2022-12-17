# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/16 22:16:02 by bmaaqoul          #+#    #+#              #
#    Updated: 2022/12/16 22:25:45 by bmaaqoul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main

CPP = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

%.o : %.cpp whatever.hpp
	$(CPP) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ) 
	$(CPP) $(CFLAGS) $^ -o $@

all : $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re