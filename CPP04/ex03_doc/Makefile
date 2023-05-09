NAME = interface
CC = c++ -g
CFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98
SRCS = main.cpp AMateria.cpp Concrete.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all