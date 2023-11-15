CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89
SRC = _atoi.c builtin.c builtin1.c environ.c errors.c errors1.c exits.c getLine.c getenv.c getinfo.c history.c lists.c lists1.c main.c memory.c parser.c realloc.c string.c string1.c shell_loop.c tokenizer.c vars.c
OBJ = $(SRC:.c=.o)
TARGET = hsh

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re