CC := gcc
CFLAGS := -Wall -Werror -Wextra -pedantic -std=gnu89
SRCS := builtins.c env-builtin.c env-main.c exec.c exit-builtin.c handle_arguments.c handle_path.c main.c prompt_interpreter.c shell.c
OBJS := $(SRCS:.c=.o)
TARGET := hsh

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean $(TARGET)

