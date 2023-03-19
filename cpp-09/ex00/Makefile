# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/17 14:02:29 by bmaaqoul          #+#    #+#              #
#    Updated: 2023/03/17 14:27:05 by bmaaqoul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc

CPP = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp BitcoinExchange.cpp

OBJ = $(SRC:.cpp=.o)

%.o : %.cpp BitcoinExchange.hpp
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