# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/13 01:00:10 by bmaaqoul          #+#    #+#              #
#    Updated: 2022/12/14 18:59:32 by bmaaqoul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

CPP = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp convert.cpp

OBJ = $(SRC:.cpp=.o)

%.o : %.cpp convert.hpp
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