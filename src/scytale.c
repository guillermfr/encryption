#include "scytale.h"

void cryptageScytale(char chaineCryptee[TAILLE_CHAINE]) {
    char cpChaineCryptee[TAILLE_CHAINE];
    int longueurChaine = strlen(chaineCryptee);
    int tailleCarre = sqrt(longueurChaine);
    while((int)tailleCarre != tailleCarre) {
        chaineCryptee[longueurChaine] = 0;
        longueurChaine++;
        tailleCarre = sqrt(longueurChaine);
    }
    chaineCryptee[longueurChaine] = '\0';
    strcpy(cpChaineCryptee, chaineCryptee);

    int k = 0;
    for(int i = 0; i<tailleCarre; i++) {
        for(int j = 0; j<longueurChaine; j+=tailleCarre) {
            chaineCryptee[k] = cpChaineCryptee[i+j];
            k++;
        }
    }
}