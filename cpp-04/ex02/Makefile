# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 00:55:51 by bmaaqoul          #+#    #+#              #
#    Updated: 2022/12/05 04:07:01 by bmaaqoul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main

CPP = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Animal.cpp main.cpp  Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

INC = Animal.hpp  Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp

OBJ = $(SRC:.cpp=.o)

%.o : %.cpp $(INC)
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
