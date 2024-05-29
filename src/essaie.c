#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((time(NULL)));
	int i=1,j=0,x, win=0;
	system("clear");
	j=rand()%71;
	do
	{	printf("Entrer un nombre compris entre [0 - 70] : ");
		scanf("%d", &x);
		if(j==x){
			printf("vous avez gagner le nombre est bien : %d :)\n", x);
			win=1;
		}
		else if(j<x)
			printf("vous chauffez :(\n");
		else
			printf("vous avez froid :(\n");
		printf("[Il vous reste : %d essaie(s)]\n", 5-i);
		i++;
	}while(!(i>5)&&!win);
	i-=1;
	if(i==5)
		printf("Le nombre rechercher est : %d :) \n\n", j);
	printf("Vous avez effectuer : %d essaie(s)\n", i);
	return 0;

}
