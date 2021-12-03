/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: apean
 *
 * Created on 20 janvier 2021, 09:33
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
    FILE *fichierSource, *fichierDest;
    typeEnTeteFichierBmp enTeteFic;
    typeEnTeteImageBmp enTeteImg;
    typeCouleur palette[NBCOULEURS];
    int check;
    char octet;
    char arg;

    int i;
    int nbDoneesIMG;
    if (argc == 4) {
        
     sscanf(argv[1],"%c",&arg);
    if(arg=='d'){
        
        decompressBmp(argv[2],argv[3]);
    }
    else{ // Q3
        if(arg=='c'){
           //compressBmp(argv[2],argv[3])
        }
    }
      
    }else{
        printf("usage: %s d/c (compresser ou decompresser) CheminDeLimageSource CheminDeDestination\n", argv[0]);
        exit(0);
    }
    //Q1
    printf("argv[0] <- %s\n"
            "argv[1] <- %s\n"
            "argv[2] <- %s\n"
            "argv[3] <- %s\n",argv[0],argv[1],argv[2],argv[3]);
    //Q2
    sscanf(argv[1],"%c",&arg);
    if(arg=='d'){
        decompressBmp(argv[2],argv[3]);
    }else{ // Q3
        if(arg=='c'){
           //compressBmp(argv[2],argv[3])
        }
    }
    
    
/*

    if (argc != 4) {
        printf("usage: %s d/c (compresser ou decompresser) CheminDeLimageSource CheminDeDestination\n", argv[0]);
        exit(0);
    }



    //printf(" bleu :%u , vert %u , rouge %u \n", palette[0].bleu, palette[0].vert, palette[0].rouge);




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

   
    fclose(fichierDest);
    if (fichierDest == NULL) {
        printf("%s", strerror(errno));
        exit(errno);
    }



*/



}

