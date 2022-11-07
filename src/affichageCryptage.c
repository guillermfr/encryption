#include "affichageCryptage.h"

void affichage(char** argv, char* chaineACrypter, char chaineCryptee[TAILLE_CHAINE]) {

    printf("Vous avez entré : \"%s\"\n", chaineACrypter);

    if(!strcmp(argv[1], "cesar")) {
        cryptageCesar(chaineCryptee);
    } else if (!strcmp(argv[1], "vigenere")) {
        cryptageVigenere(chaineCryptee);
    } else if (!strcmp(argv[1], "scytale")) {
        cryptageScytale(chaineCryptee);
    }

    printf("La chaîne cryptée est alors : \"%s\"\n", chaineCryptee);
}