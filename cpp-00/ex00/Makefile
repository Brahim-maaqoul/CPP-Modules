# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/26 22:52:52 by bmaaqoul          #+#    #+#              #
#    Updated: 2022/06/26 22:53:27 by bmaaqoul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CPP = c++
CFLAGS = -Wall -Wextra -Werror

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

%.o : %.c
	$(CPP) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CPP) $(CFLAGS) -o $@ $^
all : $(NAME)


clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all