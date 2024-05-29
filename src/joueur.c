#include <stdio.h>
#include <stdlib.h>
#include <joueur.h>


void saisir(FILE* file, joueur* jo)
{
    fprintf(file,"%s ; %d ; %d\n" ,jo->nom, jo->essaie, jo->dif);
}
void lire(FILE* file, joueur* jo)
{
    fscanf(file,"%s ; %d ; %d\n" ,jo->nom, &jo->essaie, &jo->dif);
}
void afficher(joueur* jo)
{
    printf("| %15s | %3d |\n" ,jo->nom, jo->essaie);
}
