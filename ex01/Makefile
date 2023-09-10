# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/09 16:59:45 by abenheni          #+#    #+#              #
#    Updated: 2023/09/09 18:25:50 by abenheni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Moar
CC = c++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98 #
SRC =  main.cpp Zombie.cpp zombieHorde.cpp
OBJ = $(SRC:%.cpp=%.o)
all : $(NAME)
$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ)  -o $(NAME)
%.o : %.cpp Zombie.hpp
	$(CC) $(CFLAGS)  -c $< -o $@ 
clean :
	$(RM) $(OBJ)
fclean : clean
	$(RM) $(NAME)
re : fclean all
.phony : all clean fclean $(NAME)