CC=gcc
CCFLAGS=-Wall
LIBFLAGS=-lm -pg -g

SRC= $(wildcard *.c) $(wildcard main.c)

OBJ= $(SRC:.c=.o)

EXEC= main

all: $(EXEC)
$(EXEC): $(OBJ)
	$(CC) $(CCFLAGS) $^ -o $@ $(LIBFLAGS)  
	
%.o: %.c
	$(CC) $(CCFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJ) $(EXEC)