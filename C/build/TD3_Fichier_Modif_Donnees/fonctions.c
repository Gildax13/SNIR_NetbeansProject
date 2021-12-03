/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"
#include <string.h>
#pragma pack(push, 1)

void afficheEnTeteFichierBMP(typeEnTeteFichierBmp fichier){
    
    printf("signature : %c%c \n",fichier.signature[0],fichier.signature[1]);
    printf("tailleFichier : %u \n",fichier.tailleFichier);
    printf("reserve : %u \n",fichier.reserve);
    printf("adresseImg : %u \n",fichier.adresseImg);

    
}
void afficheEnTeteImageBMP(typeEnTeteImageBmp fichier){
    
    printf("Taille entete : %u \n",fichier.tailleEnTete);
    printf("largeur : %u\n",fichier.largeur);
    printf("Hauteur : %u\n",fichier.hauteur);
    printf("nbPlan : %u\n",fichier.nbPlan);
    printf("bitParPixel : %u\n",fichier.bitParPixel);
    printf(" typeCompression : %u\n",fichier.typeCompression);
    printf("tailleImage : %u\n",fichier.tailleImage);
    printf("resolutionHorizontale : %u\n",fichier.resolutionHorizontale);
    printf("resolutionVerticale : %u\n",fichier.resolutionVerticale);
    printf("nbCouleursUtilises : %u\n",fichier.nbCouleursUtilises);
    printf("nbCouleursImportantes : %u\n",fichier.nbCouleursImportantes);
    
    
}