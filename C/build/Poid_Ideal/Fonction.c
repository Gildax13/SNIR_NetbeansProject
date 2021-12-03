/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include <stdio.h>
#include <stdlib.h>
#define TABMAX 100

float calculIMC(float poid, float taille) {
    float imc;

    imc = poid / (taille * taille);

    return imc;

}

void afficherFiche(char nom[TABMAX], char prenom[TABMAX], int age, float taille, float poid) {
    printf("\n|-----Fiche Récapitulative-----|");
    printf("\n      Identité  : %s %s       ", nom, prenom);
    printf("\n      Age       : %d          ", age);
    printf("\n      Poids     : %f          ", poid);
    printf("\n      Taille    : %f          ", taille);
    printf("\n|-----Fiche Récapitulative-----|");
}

void afficherCorpulence(float imc) {
    int i = 0;

    float tabIMC[6] = {16.5, 18.5, 25, 30, 35, 40};
    char* tabCorpulence[7] = {"famine","maigreur","corpulence normale","surpoids","obésité modérée","obésité sévère","obésité morbide"};

    if (imc < tabIMC[0]) {
        printf("\nVous êtes en %s", tabCorpulence[0]);
    }
    if (imc >= tabIMC[0] && imc < tabIMC[5]) {
        do {
            i++;
        } while (!(imc < tabIMC[i]));
        printf("\nVous êtes en %s", tabCorpulence[i]);
    }

    if (imc >= tabIMC[5]) {

        printf("\nVous êtes en %s", tabCorpulence[5]);
    }
}


void afficherMenu(){
    printf("\nCalculer votre poids ideal : \n"
            "a - formule de lorentz\n"
            "b - formule de devine\n"
            "c - formule de lorentz en tenant en compte l'age\n"
            "q - Sortir du menu de calcul du poids\n");
}
float calculerPoidsLorentz(float taille, char sexe) {
    float poidsIdeal;
    if (sexe == 'h') {
        poidsIdeal = taille * 100 - 100 - ((taille * 100 - 150) / 4);
    } else {
        poidsIdeal = taille * 100 - 100 - ((taille * 100 - 150) / 2.5);
    }
    return poidsIdeal;
}
float calculerPoidsLorentzAge(float taille, int age) {
    float poidsIdeal;
    poidsIdeal = 50 + ((taille * 100 - 150) / 4)+((age - 20) / 4);
    return poidsIdeal;
}
float calculerPoidsDevine(float taille, char sexe) {
    float poidsIdeal;
    if (sexe == 'h') {
        poidsIdeal = 50 + 2.3 * ((taille / 0.0254) - 60);
    } else {
        poidsIdeal = 45.5 + 2.3 * ((taille / 0.0254) - 60);
    }
    return poidsIdeal;
}


