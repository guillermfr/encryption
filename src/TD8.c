#include "TD8.h"

int main(int argc, char** argv) {
    
    gestionParam(argc, argv);

    char* chaineACrypter;
    char chaineCryptee[TAILLE_CHAINE];

    printf("Veuillez entrer la chaîne à crypter :\n");
    chaineACrypter = entreeChaine();
    strcpy(chaineCryptee, chaineACrypter);
    
    // cryptageCesar(chaineCryptee);
    // printf("La chaîne cryptée est alors : \"%s\"\n", chaineCryptee);

    // cryptageVigenere(chaineCryptee);
    // printf("La chaîne cryptée est alors : \"%s\"\n", chaineCryptee);

    // cryptageScytale(chaineCryptee);
    // printf("La chaîne cryptée est alors : \"%s\"\n", chaineCryptee);

    affichage(argv, chaineACrypter, chaineCryptee);

    free(chaineACrypter);

    return 0;
}