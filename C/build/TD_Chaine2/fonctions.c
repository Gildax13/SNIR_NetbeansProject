/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "fonctions.h"
#include <string.h>


char afficherDerniereLettre(char chaine[255]){
    int taille = strlen(chaine);
    char last;
    
    last=chaine[taille-1];
    
    return (last);
    
}

char afficherAvantDerniereLettre(char chaine[255]){
    int taille = strlen(chaine);
    char last;
    
    last=chaine[taille-2];
    
    return (last);
    
}
char chaineSansTerminaison(char chaine[255]){
    int taille = strlen(chaine);
    char chaineCopier[255];

    int i;
    for(i=0;i<taille-3;i++){
        strcpy(chaineCopier[i],chaine[i]);
    }
    return (chaineCopier);
    
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





