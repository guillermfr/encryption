#include "cesar.h"

int decalageCesar() {
    printf("Veuillez entrer le décallage souhaité (minimum -25, maximum 25):\n");

    int erreur;
    char chaineDecalage[4];
    int nbDecalage;

    do {
        erreur = 0;
        fgets(chaineDecalage, 5, stdin);
        nbDecalage = atoi(chaineDecalage);

        if(chaineDecalage[strlen(chaineDecalage)-1] != '\n') {
            printf("Le nombre que vous avez entré n'est pas correct, veuillez réessayer :\n");
            viderBuffer();
            erreur = 1;
        } else if (!((nbDecalage > -26) && (nbDecalage < 26))) {
            printf("Le nombre que vous avez entré n'est pas correct, veuillez réessayer :\n");
            erreur = 1;
        }
    } while (erreur == 1);
    chaineDecalage[strlen(chaineDecalage)-1] = '\0';
    nbDecalage = atoi(chaineDecalage);

    return nbDecalage;
}

void cryptageCesar(char chaineCryptee[TAILLE_CHAINE]) {

    int nbDecalage = decalageCesar();

    int signe;
    if(nbDecalage > 0) {
        signe = 1;
    } else {
        nbDecalage = -1 * nbDecalage;
        signe = -1;
    }

    for(int i = 0; i<strlen(chaineCryptee); i++) {

        for(int j = 0; j<nbDecalage; j++) {
            if((chaineCryptee[i] > 96 && chaineCryptee[i] < 123) || (chaineCryptee[i] > 64 && chaineCryptee[i] < 91)) chaineCryptee[i]+=signe;
            if(chaineCryptee[i] == 64 || chaineCryptee[i] == 91 || chaineCryptee[i] == 96 || chaineCryptee[i] == 123) {
                chaineCryptee[i] = chaineCryptee[i] - signe*26;
            }
        }

    }
}