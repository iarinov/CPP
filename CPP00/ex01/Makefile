# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aiarinov <aiarinov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 14:04:01 by aiarinov          #+#    #+#              #
#    Updated: 2022/10/20 14:08:02 by aiarinov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phoneBook

CC= c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS=	contact.cpp main.cpp phoneBook.cpp

OBJS=	$(SRCS:.cpp=.o)

.c.o :
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

all:	$(NAME)

re:		fclean all

.PHONY:	clean fclean all re
