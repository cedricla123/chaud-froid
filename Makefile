CC = gcc
SRC = ./src/main.c ./src/fonction.c ./src/joueur.c
OBJ = ./obj/main.o ./obj/fonction.o ./obj/joueur.o
EXEC = ./bin/programe

all : $(EXEC)

$(EXEC) : $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)
	
main.o : $(SRC)
	$(CC) -c ./src/main.c -o ./obj/main.o -I ./include

fonction.o : $(SRC)
	$(CC) -c ./src/fonction.c -o ./obj/fonction.o -I ./include

joueur.o : $(SRC)
	$(CC) -c ./src/joueur.c -o ./obj/joueur.o -I ./include

run : 
	(EXEC)