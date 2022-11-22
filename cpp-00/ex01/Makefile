# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/27 04:06:46 by bmaaqoul          #+#    #+#              #
#    Updated: 2022/11/01 20:52:22 by bmaaqoul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phoneapp

CPP = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp PhoneBook.cpp Contact.cpp utils.cpp

OBJ = $(SRC:.cpp=.o)

%.o : %.cpp PhoneBook.hpp Contact.hpp
	$(CPP) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ) 
	$(CPP) $(CFLAGS) $^ -o $@

all : $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all