
CC=gcc
AR=ar
MAKEMYMATHS=libmyMath.a
MAKEMYMATHD=libmyMath.so
FLAGS= -Wall -g

all: mains  maind  	
mains: power.o basicMath.o main.o mymaths
	$(CC) $(FLAGS) -o mains main.o power.o basicMath.o mymaths
maind: power.o basicMath.o main.o mymathd
	$(CC) $(FLAGS) -o maind main.o power.o basicMath.o ./mymathd 
mymaths: power.o basicMath.o 
	$(AR) -rcs mymaths power.o basicMath.o
mymathd: power.o basicMath.o
	$(CC) -shared -o mymathd power.o basicMath.o
power.o:  power.c myMath.h
	$(CC) $(FLAGS) -c power.c
basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c
main.o: main.c myMath.h  
	$(CC) $(FLAGS) -c main.c 

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maind mymaths mymathd
























