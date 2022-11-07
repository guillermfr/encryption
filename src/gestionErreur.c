#include "gestionErreur.h"

void messageErreur(){
    printf("Vous n'avez pas correctement utilisé le programme :\n");
    printf("Utilisation :\n");
    printf("./main nomCryptage\n");
    printf("Les 3 cryptages disponibles sont :\n");
    printf("\t- le code de César : cesar\n");
    printf("\t- le code de Vigenère : vigenere\n");
    printf("\t- le code de Scytale : scytale\n");
}