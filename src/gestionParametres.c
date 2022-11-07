#include "gestionParametres.h"

void gestionParam(int nbArguments, char** argv) {
    if(nbArguments != 2) {
        messageErreur();
        exit(EXIT_FAILURE);
    }

    if(strcmp(argv[1], "cesar") && strcmp(argv[1], "vigenere") && strcmp(argv[1], "scytale")) {
        messageErreur();
        exit(EXIT_FAILURE);
    }
}