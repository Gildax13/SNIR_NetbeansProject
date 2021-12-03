/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: apean
 *
 * Created on 18 janvier 2021, 14:10
 */

#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"
#include <string.h>
#pragma pack(push, 1)
#include <errno.h>

/*
 * 
 */
int main(int argc, char** argv) {
    //---------------------------Question 1 et 2---------------------------
    FILE *fichierSource, *fichierDest;
    typeEnTeteFichierBmp enTeteFic;
    typeEnTeteImageBmp enTeteImg;
    typeCouleur palette[NBCOULEURS];
    int check;
    char chemin[500];
    char nomFichier[255];
    char octet;
    int retClose;
    int i;
    int nbDoneesIMG;
    /*
    fd = fopen(argv[1], "r");
    if (fd == NULL) {
        printf("pb ouverture : %s\n", strerror(errno));
        exit(errno);
    }
    
    
    check = fread(&enTeteFic,sizeof (typeEnTeteFichierBmp), 1,fd);
    if (check != 1) {
        printf("Erreur FIchierBmp , veuillez contacter votre centrale");
    }
    afficheEnTeteFichierBMP(enTeteFic);
    
    check = fread(&enTeteImg,sizeof (typeEnTeteImageBmp), 1,fd);
    
     if (check != 1) {
        printf("Erreur ImageBmp , veuillez contacter votre centrale");
    }
    
    afficheEnTeteImageBMP(enTeteImg);
    
    fclose(fd);

    if (fd == NULL) {
        printf("Probleme fermeture : %s\n", strerror(errno));
        exit(errno);
    }

     */
    //---------------------------Question 3 et 4---------------------------
    
    if (argc != 3) {
        printf("usage: %s CheminDeLimage\n", argv[0]);
        exit(0);


    }
    printf("\nVous ouvrez l'image : %s\n", chemin);

    fichierSource = fopen(argv[1], "r");
    if (fichierSource == NULL) {
        printf("Ouverture impossible du fichier source, veuillez contacter votre centrale");
    }
    check = fread(&enTeteFic, sizeof (typeEnTeteFichierBmp), 1, fichierSource);
    check = fread(&enTeteImg, sizeof (typeEnTeteImageBmp), 1, fichierSource);
    check = fread(palette, sizeof ( typeCouleur), NBCOULEURS, fichierSource);

    if (check != 256) {
        printf("Erreur ImageBmp , veuillez contacter votre centrale");
    }
    printf(" bleu :%u , vert %u , rouge %u \n", palette[0].bleu, palette[0].vert, palette[0].rouge);

    fichierDest = fopen(argv[2], "w");
    if (fichierDest == NULL) {
        printf("Ouverture impossible du fichier destination , veuillez contacter votre centrale");
    }

    check = fwrite(&enTeteFic, sizeof (typeEnTeteFichierBmp), 1, fichierDest);
    if (check == NULL) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }

    check = fwrite(&enTeteImg, sizeof (typeEnTeteImageBmp), 1, fichierDest);
    if (check == NULL) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }

    for (i = 0; i < NBCOULEURS; i++) {
        palette[i].rouge = 0;
        palette[i].bleu = 0;

    }

    check = fwrite(palette, sizeof (typeCouleur), NBCOULEURS, fichierDest);
    if (check != NBCOULEURS) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }

    nbDoneesIMG = enTeteFic.tailleFichier - sizeof (typeEnTeteFichierBmp) - sizeof (typeEnTeteImageBmp) - sizeof (typeCouleur);
    for (i = 0; i < nbDoneesIMG; i++) {
        check = fread(&octet, sizeof (char), 1, fichierSource);
        if (check == NULL) {
            printf("%s\n", strerror(errno));
            exit(errno);
        }
        check = fwrite(&octet, sizeof (char), 1, fichierDest);
        if (check == NULL) {
            printf("%s\n", strerror(errno));
            exit(errno);
        }
    }





    fclose(fichierSource);

    if (fichierSource == NULL) {
        printf("%s", strerror(errno));
        exit(errno);
    }
    fclose(fichierDest);
    if (fichierDest == NULL) {
        printf("%s", strerror(errno));
        exit(errno);
    }



}



