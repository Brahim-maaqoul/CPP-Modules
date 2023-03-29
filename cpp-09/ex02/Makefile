# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/25 03:04:42 by bmaaqoul          #+#    #+#              #
#    Updated: 2023/03/26 00:24:59 by bmaaqoul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe

CPP = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp PmergeMe.cpp 

OBJ = $(SRC:.cpp=.o)

%.o : %.cpp PmergeMe.hpp
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