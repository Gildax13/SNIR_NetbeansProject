/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: apean
 *
 * Created on 5 janvier 2021, 14:34
 */

#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"

/*
 * 
 */
int main(int argc, char** argv) {
    char choix;
    int compteurFiche=0;
    //typeAdherent *p;
    typeAdherent *tabAdherent[5000];
    do{
        
    afficherMenu(compteurFiche);
    scanf(" %c",&choix);
       switch(choix){
           case 'a':;
           case 'A':tabAdherent[compteurFiche]=creerUnAdherent();
           compteurFiche++;
           break;
           case 's':;
           case 'S':printf("Vous souhaitez supprimer une fiche \n");
           break;
           case 'm':;
           case 'M':printf("Vous souhaitez modifier une fiche \n");
           break;
           case 'v':;
           case 'V':printf("Vous souhaitez voir une fiche \n");
           break;
           case 'l':;
           case 'L':printf("Vous souhaitez voir toutes les fiches \n");
           afficherLesAdherents(tabAdherent,compteurFiche);
           break;
           case 'e':;
           case 'E':printf("Vous souhaitez supprimer toutes les fiches \n");
           break;
           case 'q':;
           case 'Q':printf("Vous avez quitter ! \n");
           break;
           }
    }while(choix!='q' && choix!='Q');

    return (EXIT_SUCCESS);
}


