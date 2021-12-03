/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: root
 *
 * Created on 31 octobre 2020, 15:19
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int jour;
    int mois;
    int annee;
    char prenom[49];
    char nom[49];
    int choix;


    printf("jour de naissance :\n");
   
    scanf("%d", &jour);
    printf("mois de naissance :\n");
   
    scanf("%d", &mois);
    printf("annee de naissance :\n");
  
    scanf("%d", &annee);

    printf("Votre date de naissance est le : %d/%d/%d", jour, mois, annee);

    printf("\nVotre nom:\n");
 
    scanf("%s", nom);
    printf("\nVotre prenom:\n");
 
    scanf("%s", prenom);

    printf("Bonjour %s %s", prenom, nom);


    printf("\nFormat d'affichage de votre date de naissance :\n"
            "1-jj/mm/aaaa\n"
            "2-jj-mm-aaa\n"
            "3-jj:mm:aaa\n"
            "4-jj.mm.aaa\n"
            "Choisissez le format de votre affichage (1,2,3,4): ");
    
    scanf("%d",&choix);
    
    switch (choix) {
            case 1:printf("%d/%d/%d", jour, mois, annee);
                break;
            case 2:printf("%d-%d-%d", jour, mois, annee);
                break;
            case 3:printf("%d:%d:%d", jour, mois, annee);
                break;
            case 4:printf("%d.%d.%d", jour, mois, annee);
                break;
            default: printf("Erreur");
                break;

        }


}