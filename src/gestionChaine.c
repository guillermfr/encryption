#include "gestionChaine.h"

void viderBuffer() {
    int c = 0;
    while(c != '\n' && c != EOF) {
        c = getchar();
    }
}

char* entreeChaine() {
    char* chaineEntree = (char*) malloc(TAILLE_CHAINE*sizeof(char));
    int erreur;
    do {
        erreur = 0;
        fgets(chaineEntree, TAILLE_CHAINE, stdin);
        if(chaineEntree[strlen(chaineEntree)-1] != '\n') {
            printf("La chaine que vous avez entré est trop longue, veuillez réessayer avec une chaîne plus courte.\n");
            viderBuffer();
            erreur = 1;
        } else if(strlen(chaineEntree) == 1) {
            printf("Veuillez ne pas laisser la chaîne vide :\n");
            erreur = 1;
        }
    } while (erreur == 1);
    chaineEntree[strlen(chaineEntree)-1] = '\0';

    return chaineEntree;
}