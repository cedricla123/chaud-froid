#ifndef __JOUEUR__H__
#define  __JOUEUR__H__

    typedef enum DIFFICULTE
    {
        DUBUTANT = 70, FACILE = 100, NORMAL = 150, DIFFICILE = 500, EXPERT = 1000 
    }DIFFICULTE;

    typedef struct joueur
    {
        char nom[15];
        int essaie;
        DIFFICULTE dif;
    }joueur;
    
    void saisir(FILE*, joueur*);
    void lire(FILE*, joueur*);
    afficher(joueur*);

#endif