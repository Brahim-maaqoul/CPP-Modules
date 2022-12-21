# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/18 00:47:31 by bmaaqoul          #+#    #+#              #
#    Updated: 2022/12/19 03:51:45 by bmaaqoul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01

CPP = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Span.cpp

OBJ = $(SRC:.cpp=.o)

%.o : %.cpp Span.hpp
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