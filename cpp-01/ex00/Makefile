# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 23:26:35 by bmaaqoul          #+#    #+#              #
#    Updated: 2022/11/01 23:31:17 by bmaaqoul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

CPP = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Zombie.cpp randomChump.cpp newZombie.cpp

OBJ = $(SRC:.cpp=.o)

%.o : %.cpp Zombie.hpp
	$(CPP) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ) 
	$(CPP) $(CFLAGS) $^ -o $@

all : $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all