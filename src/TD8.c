#include "TD8.h"

int main(int argc, char** argv) {
    
    // gestionNbParam(argc, argv);

    printf("Veuillez entrer la chaîne à crypter :\n");
    // char chaineACrypter[TAILLE_CHAINE];
    char* chaineACrypter;
    char chaineCryptee[TAILLE_CHAINE];
    chaineACrypter = entreeChaine();
    strcpy(chaineCryptee, chaineACrypter);
    printf("Vous avez entré : \"%s\"\n", chaineACrypter);
    // printf("Vous avez entré : \"%s\"\n", chaineCryptee);
    
    cryptageCesar(chaineCryptee);

    printf("La chaîne cryptée est alors : \"%s\"\n", chaineCryptee);

    free(chaineACrypter);

    return 0;
}