#include "vigenere.h"

int decalageVigenere(char caractere) {
    int nbCaractere = (int)caractere;

    if(nbCaractere > 96 && nbCaractere < 123) nbCaractere-=97;
    else if(nbCaractere > 64 && nbCaractere < 91) nbCaractere-=65;

    return nbCaractere;
}

void cryptageVigenere(char chaineCryptee[TAILLE_CHAINE]) {
    printf("Veuillez entrer la clé de cryptage :\n");
    char* cleCryptage = entreeChaine();
    printf("La clé de cryptage est : \"%s\"\n", cleCryptage);

    int nbDecalage = 0;
    int k = 0;

    for(int i = 0; i<strlen(chaineCryptee); i++) {

        if(k >= strlen(cleCryptage)) k-=strlen(cleCryptage);
        nbDecalage = decalageVigenere(cleCryptage[k]);
        if((chaineCryptee[i] > 96 && chaineCryptee[i] < 123) || (chaineCryptee[i] > 64 && chaineCryptee[i] < 91)) k++;

        for(int j = 0; j<nbDecalage; j++) {
            if((chaineCryptee[i] > 96 && chaineCryptee[i] < 123) || (chaineCryptee[i] > 64 && chaineCryptee[i] < 91)) chaineCryptee[i]++;
            if(chaineCryptee[i] == 64 || chaineCryptee[i] == 91 || chaineCryptee[i] == 96 || chaineCryptee[i] == 123) {
                chaineCryptee[i] = chaineCryptee[i] - 26;
            }
        }

    }
}