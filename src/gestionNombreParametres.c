#include "gestionNombreParametres.h"

void gestionNbParam(int nbArguments, char** argv) {
    if(nbArguments != 2) {
        messageErreur();
        exit(EXIT_FAILURE);
    }

    if(!strcmp(argv[1], "cesar")) {
        printf("cesar\n");
    } else if (!strcmp(argv[1], "vigenere")) {
        printf("vigenere\n");
    } else if (!strcmp(argv[1], "scytale")) {
        printf("scytale\n");
    } else {
        messageErreur();
        exit(EXIT_FAILURE);
    }
}