NAME = avm

CC = g++

CFLAGS = -Wall -Werror -Wextra

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -o $@ $(OBJ)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

%.o: %.cpp
	@$(CC) $(CFLAGS) -o $@ -c $<

.PHONY: all clean re

