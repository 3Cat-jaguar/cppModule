# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ylee <ylee@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 08:49:01 by ylee              #+#    #+#              #
#    Updated: 2021/11/29 08:57:07 by ylee             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
NAME = megaphone
SRCS = megaphone.cpp

all : $(NAME)

$(NAME) : $(SRCS)
			$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean : $(NAME)
			$(RM) $(NAME)
