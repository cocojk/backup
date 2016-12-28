TARGET = output 
CC = gcc 
SRC = $(wildcard *.c)
OBJECTS = $(SRC:.c=.o)
.PHONY : $(TARGET) 


$(TARGET) : $(OBJECTS) 
	@echo "hi"
	echo "hi"
	$(CC) -o $@ $^
