
NAME = zombie

CC= clang++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS=	Zombie.cpp \
		newZombie.cpp \
		randomChump.cpp \
		main.cpp

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
