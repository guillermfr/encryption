#include "TD8.h"

int main(int argc, char** argv) {
    
    // gestionNbParam(argc, argv);

    printf("Veuillez entrer la chaîne à crypter :\n");
    char chaineACrypter[TAILLE_CHAINE];
    char chaineCryptee[TAILLE_CHAINE];
    entreeChaine(chaineACrypter);
    strcpy(chaineCryptee, chaineACrypter);
    printf("Vous avez entré : \"%s\"\n", chaineACrypter);
    
    cryptageCesar(chaineCryptee);

    printf("La chaîne cryptée est alors : \"%s\"\n", chaineCryptee);

    return 0;
}