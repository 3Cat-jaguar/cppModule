# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 10:34:25 by ylee              #+#    #+#              #
#    Updated: 2021/12/01 02:46:59 by ylee             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
NAME = YleeBook
SRCS = main.cpp\
	   phonebook.cpp
#INC = ./YleeBook.hpp

all : $(NAME)

$(NAME) : $(SRCS)
#			$(CC) $(CFLAGS) $(SRCS) -I$(INC) -o $(NAME)
			$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean :
	$(RM) $(NAME)

re : clean all

