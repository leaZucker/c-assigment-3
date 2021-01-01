CC= gcc
FLAGS = -Wall -g
all: isort txtfind

isort: isort.o misort.o
	$(CC) $(FLAGS) -o isort isort.o misort.o
isort.o: isort.c isort.h
	$(CC) $(FLAGS) -c isort.c 
misort.o: misort.c isort.h
	$(CC) $(FLAGS) -c misort.c


txtfind: txtfind.o mtxtfind.o
	$(CC) $(FLAGS) -o txtfind txtfind.o mtxtfind.o
txtfind.o: txtfind.c txtfind.h
	$(CC) $(FLAGS) -c txtfind.c
mtxtfind.o: mtxtfind.c txtfind.h
	$(CC) $(FLAGS) -c mtxtfind.c
	
clean:
	rm -f *.o isort txtfind