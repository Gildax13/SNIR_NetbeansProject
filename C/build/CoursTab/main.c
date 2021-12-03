/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: apean
 *
 * Created on 5 novembre 2020, 10:32
 */

#include <stdio.h>
#include <stdlib.h>

#define JOURS 4
int main(int argc, char** argv) {

    float tabTempMin[JOURS];
    float tabTempMax[JOURS];
    float tempMin;
    float tempMax;
    int jourMin;
    int jourMax;

    int i;
//Saisie des Valeur de températures jusqu'a nombre de Jours
    for (i = 0; i < JOURS; i++) {
        printf("Saisissez la température mini pour le jour %d : \n", i + 1);
        scanf("%f", &tabTempMin[i]);
        printf("Saisissez la température max pour le jour %d : \n", i + 1);
        scanf("%f", &tabTempMax[i]);
    }
    //Affichage des Valeurs 
    for (i = 0; i < JOURS; i++) {
        printf("Jour %d : %.2f  - %.2f \n", i + 1, tabTempMin[i], tabTempMax[i]);
    }
    tempMax = tabTempMax[0];
    tempMin = tabTempMin[0];
    jourMin = 0;
    jourMax = 0;
    
    //Recherche des température minimal et maximale ainsi que leurs jours correspondant
    for (i = 1; i < JOURS; i++) {
        if (tempMin > tabTempMin[i]) {
            tempMin = tabTempMin[i];
            jourMin = i;
        }
        if (tempMax < tabTempMax[i]) {
            tempMax = tabTempMax[i];
            jourMax = i; 
        }
    }
    printf("la température minimale des %d jours est : %.2f\n", JOURS, tempMin);
    printf("la température maximale des %d jours est : %.2f\n", JOURS, tempMax);
    printf("La température minimale est au jour n° %d et la maximale du jour n° %d", jourMin + 1, jourMax + 1);
    return (EXIT_SUCCESS);
}

