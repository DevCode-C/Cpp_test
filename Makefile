TARGET = main
CC = g++
OBJS = main.o newClass.o
HEADERS = -I .
CPPFLAGS += -c -std=c++14 -Wall -g -O0 -o
LDFLAGS += -lm 

all:$(OBJS) $(TARGET)

$(TARGET) : $(OBJS)
	@$(CC) $(OBJS) $(LDFLAGS) -o $(TARGET) 

%.o : %.c  
	@$(CC) $(CFLAGS) $@ $^

.PHONY : clean
clean : 
	@rm -f *.o $(TARGET)
.PHONY : do
do : 
	@./$(TARGET)
.PHONY : debug
debug :
	@gdb $(TARGET)
