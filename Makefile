CC = gcc
CFLAGS = -Wall -Werror -pedantic

SOURCES = _atoi.c builtin.c builtin1.c environ.c errors.c exits.c getLine.c getenv.c getinfo.c \
          history.c lists.c lists1.c main.c memory.c parser.c realloc.c shell_loop.c string.c \
          string1.c tokenizer.c vars.c

OBJECTS = $(SOURCES:.c=.o)
EXECUTABLE = my_shell

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(EXECUTABLE) $(OBJECTS)