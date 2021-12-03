/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: apean
 *
 * Created on 1 décembre 2020, 13:27
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonctions.h"

#define TABMAX 255

/*
 * 
 */
int main(int argc, char** argv) {
    /*  char chaine[255];
      int taille;
      char lastLettre;
      char avantLastLettre; 
      char chaineSansT[255];
    
      printf("Saisir un verbe");
      gets(chaine);
    
      taille = strlen(chaine);
    
      lastLettre=afficherDerniereLettre(chaine);
      avantLastLettre=afficherAvantDerniereLettre(chaine);
      strcpy(chaineSansT,chaineSansTerminaison(chaine));
      printf("%s\n",chaine);
     // printf("%c%c\n",avantLastLettre,lastLettre);
     // printf("%s\n",chaineSansT);
    
     */
    char tab[200];
    char term[2];
    char tabSansT[200];
    int taille;
    printf("Saisir un verbe : \n");
    gets(tab);

    taille = strlen(tab);
    for (int i = 0; i < taille - 2; i++) {
        tabSansT[i] = tab[i];
        printf("%c\n", tabSansT[i]);
    }
    tabSansT[taille - 1] = "\0";
    
    printf("%s\t\n", tabSansT);
    printf("%c\n", tabSansT[0]);

    printf("%d", taille - 2);


    if (tab[taille - 1] == 'r' &&
            tab[taille - 2] == 'e'
            && strcmp(tab, "aller") != 0) {
        if (tab[0] == 'a' || tab[0] == 'e' || tab[0] == 'i' || tab[0] == 'o' || tab[0] == 'u' || tab[0] == 'i') {
            printf("\nJ'          ");
            printf("%se\n", tabSansT);
        } else {
            printf("\nJe          ");
            printf("%se\n", tabSansT);
        }

        printf("Tu          ");
        printf("%ses\n", tabSansT);
        printf("Il/Elle     ");
        printf("%se\n", tabSansT);
        printf("Nous        ");
        printf("%sons\n", tabSansT);
        printf("Vous        ");
        printf("%sez\n", tabSansT);
        printf("Ils/Elles   ");
        printf("%sent\n", tabSansT);
    }


    return (EXIT_SUCCESS);
}

