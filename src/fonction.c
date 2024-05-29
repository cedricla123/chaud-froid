#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <fonction.h>

/*-----------------------------------------------------------------------------------*/

int fRandom(int nombre)
{
    return (int)rand()%nombre+1;
}

/*-----------------------------------------------------------------------------------*/

joueur* trier_table(joueur* TAB , int nombreJoueur)
{
    int i,aux=0;
    for(i=0 ; i<nombreJoueur ; i++)
    {
        if(TAB[i].essaie > TAB[i+1].essaie)
        {
            aux = TAB[i].essaie;
            TAB[i].essaie = TAB[i+1].essaie;
            TAB[i+1].essaie = aux;
        }
    }
    return TAB;
}

/*-----------------------------------------------------------------------------------*/

void fjouer(joueur jr)
{
    srand(time(NULL));
    int i=0,x,trouver=0, abandon=0;
    x = fRandom(jr.dif);

    while()
}

/*-----------------------------------------------------------------------------------*/
