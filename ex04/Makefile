# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/10 19:59:37 by abenheni          #+#    #+#              #
#    Updated: 2023/09/10 20:46:24 by abenheni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed
CC = c++
RM = rm -f
CFLAGS = #-Wall -Wextra -Werror -std=c++98 
SRC =  main.cpp  replace.cpp
OBJ = $(SRC:%.cpp=%.o)
all : $(NAME)
$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ)  -o $(NAME)
%.o : %.cpp replace.hpp
	$(CC) $(CFLAGS)  -c $< -o $@ 
clean :
	$(RM) $(OBJ)
fclean : clean
	$(RM) $(NAME)
re : fclean all
.phony : all clean fclean $(NAME)