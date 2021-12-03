/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "mesFonctions.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void afficherMenu(char sexe) {
    if (sexe == 'h') {
        printf("Voici le Menu Homme");
    }
    if (sexe == 'f') {
        printf("Voici le Menu Femme");
    }

}

void ecrire(char chaine) {
    printf("%c", chaine);
}

float additionReels(float val1, float val2) {
    float resultat;
    resultat = val1 + val2;
    return resultat;
}

void afficherCarre(int val) {
    printf("%d", calculerCarre(val));
}

int calculerCarre(int val) {
    int res;
    res = val*val;
    return res;
}

float calculerDiscriminant(float a, float b, float c) {
    float delta;

    delta = (b * b) - (4 * a * c);
    return delta;

}

void afficherDelta(float a, float b, float c) {
    printf("%f", calculerDiscriminant(a, b, c));
}

void afficherRacines(float a, float b, float c) {
    float x1, x2;

    if (calculerDiscriminant(a, b, c) < 0) {
        printf("\nDelta Négatif : Pas de solutions");
    } else {
        if (calculerDiscriminant(a, b, c) == 0) {
            x1 = (-b + sqrtf(calculerDiscriminant(a, b, c))) / 2 * a;
            printf("\nDelta = 0 : 1 solution  : %f\n", x1);
        } else {
            x1 = (-b + sqrtf(calculerDiscriminant(a, b, c))) / 2 * a;
            x2 = (-b - sqrtf(calculerDiscriminant(a, b, c))) / 2 * a;
            printf("\nDelta > 0 : 2 solution  | x1 =  %f et x2 = %f\n", x1, x2);
        }
    }
}

void afficherLigne(int nb) {
    int i;
    for (i = 0; i < nb; i++) {
        printf("* ");
    }
    printf("\n");
}

void afficherUnCarre(int nb) {
    int i;
    for (i = 0; i < nb; i++) {
        afficherLigne(nb);
        // printf("\n");
    }
}

void afficherUnRectangle(int longueur, int largeur) {
    int i;
    for (i = 0; i < largeur; i++) {
        afficherLigne(longueur);
        //   printf("\n");
    }
}

int compterSymboles(char text[], char caractere) {
    int i;
    int taille = strlen(text);
    int nbcaractere = 0;
    for (i = 0; i < taille; i++) {
        if (text[i] == caractere) {
            nbcaractere++;
        }
    }

    return nbcaractere;

}

int verifTerminaison(char *chaine, char fin[2]) {
    int taille;
    int retour = -1;
    taille = strlen(chaine);
    if (chaine[taille - 2] == fin[0] && chaine[taille - 1] == fin[1]) {
        retour = 1;
    }
    return retour;


}

#define LARGEUR 15
#define HAUTEUR 9

void initGrille(unsigned char grille[LARGEUR][HAUTEUR]) {
    int y, x;
    for (y = 0; y < HAUTEUR; y++) {
        for (x = 0; x < LARGEUR; x++) {
            grille[x][y] = '.';
        }
    }
}

void afficherGrille(unsigned char grille[LARGEUR][HAUTEUR]) {
    int x, y;
    unsigned char lettre = 'A';
    printf(" ");
    for (x = 0; x < LARGEUR; x++) {
        printf(" %c", lettre++);

    }
    printf("\n");
    for (y = 0; y < HAUTEUR; y++) {
        printf("%d ", y + 1);
        for (x = 0; x < LARGEUR; x++) {
            printf(" %c", grille[x][y]);
        }
        printf("\n");
    }
}

int nbCroix(unsigned char grille[LARGEUR][HAUTEUR]) {
    int x, y;
    int compte = 0;
    for (y = 0; y < HAUTEUR; y++) {
        for (x = 0; x < LARGEUR; x++) {
            if (grille[x][y] == 'X') {
                compte++;
            }
        }
    }
    return compte;
}

