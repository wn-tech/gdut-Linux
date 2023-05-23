CC = gcc
CFLAGS = -Wall -Wextra

SRCS = main.c cpu.c process.c memory.c storage.c exit.c menu.c
OBJS = $(SRCS:.c=.o)
EXEC = program_1
LOGS = log.txt

.PHONY: all clean

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)
	rm -i $(LOGS)