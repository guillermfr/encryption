#ifndef AFFICHAGECRYPTAGE_H
#define AFFICHAGECRYPTAGE_H

#include "includes.h"
#include "defines.h"

#include "cesar.h"
#include "vigenere.h"
#include "scytale.h"

void affichage(char** argv, char* chaineACrypter, char chaineCryptee[TAILLE_CHAINE]);

#endif