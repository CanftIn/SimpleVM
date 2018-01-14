CC = gcc
CFLAGS = -Wall -c
LFLAGS = -Wall

OBJECTS = hash_table.o instructions.o label.o main.o memory.o \
			program.o stack.o virtual_machine.o 

all: simplevm

simplevm: $(OBJECTS)
	$(CC) $(LFLAGS) $(OBJECTS) -o simplevm

%.o: %.c 
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f simplevm *.o 

.PHONY: clean
.SILENT: clean