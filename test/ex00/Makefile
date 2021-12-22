# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyahn <hyahn@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 10:01:17 by hyahn             #+#    #+#              #
#    Updated: 2021/12/14 18:24:08 by hyahn            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = polymorphism
SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	${CC} $(CFLAGS) -c $<

$(NAME) : $(OBJS)
	${CC} $(CFLAGS) $(OBJS) -o $(NAME)


clean:
		rm -f $(OBJS)

fclean:
		rm -f $(OBJS)
		rm -f $(NAME)

re: 	fclean all

.PHONY: all clean fclean re

