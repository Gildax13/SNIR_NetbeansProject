/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: apean
 *
 * Created on 4 janvier 2021, 16:49
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include "fonctions.h"
#pragma pack(push, 1)

#define NBMAXCAR 50
#define NBPERS 5

typedef struct personne {
        char nom[NBMAXCAR]; //50 octets
        char prenom[NBMAXCAR]; //50 octets
        int age; //4 octets
        float poids; //4 octets
        char sexe; // 'f' ou 'm'   //1 octets
    } typePersonne;

/*
 * 
 */

void afficherErreur();

int main(int argc, char** argv) {
    FILE* fd;

    /*fd = fopen("/home/USERS/ELEVES/SNIR2020/apean/NetBeansProjects/C/build/StockageFichier/dist/Debug/GNU-Linux/essai.txt", "w"); 
    fputs("coucou",fd);
    fclose(fd);

    if(fd==NULL){
        afficherErreur();
    }else{

    fclose(fd);
    }
        return (EXIT_SUCCESS);
    }

    void afficherErreur(){
        if(errno!=0){
            printf("Erreur : %s",strerror(errno));
        }else{
            printf("Pas d'erreur");
        }
     * */


    /*-------------
    fd = fopen("/home/USERS/ELEVES/SNIR2020/fichierTexte.txt", "r");
    int retour;
        int compteurMinus;
        unsigned char carac;
        compteurMinus=0;

    while (!feof(fd))
        {
            // lire caractere
            retour = fgetc(fd);
            if (retour == EOF)  // la lecture a provoque une erreur
            {
                if (!feof(fd))
                {
                    printf("%s\n", strerror(errno));
                    exit(errno);
                }
            }
            else // le caractere lu correctement
            {
                carac = (unsigned char) retour;
                // carac est-il une minuscule ?
                if (carac>='a' && carac<='z')
                {
                    // augmenter le compteur de minuscules
                    compteurMinus++;
                }
                printf("%c", carac);
            }

        }
        //fermer le fichier
        retour = fclose(fd);
        if (retour == EOF)
        {
            printf("%s\n", strerror(errno));
            exit(errno);
        }
        // afficher le nombre de minuscules
        printf("Le fichier contient %d minuscules \n",compteurMinus);
        return (EXIT_SUCCESS);



     */

    //------------------------------------------------------


    typePersonne tabPersonne[NBPERS];
    int i;
    int retour;

    for (i = 0; i < NBPERS; i++) {
        tabPersonne[i].age = 30 + i;
        tabPersonne[i].poids = 80.3;
        tabPersonne[i].sexe = 'f';
        strcpy(tabPersonne[i].nom, "Fox");
        strcpy(tabPersonne[i].prenom, "Samantha");
    }
    fd = fopen("/home/USERS/ELEVES/SNIR2020/apean/NetBeansProjects/C/build/StockageFichier/dist/Debug/GNU-Linux/5personnewrite.bin", "r");

    if (fd == NULL) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }

    retour = scanf(tabPersonne, sizeof (typePersonne), NBPERS, fd);
    if (retour != NBPERS) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }

    for (i = 0; i < NBPERS; i++) {
        retour = fscanf(fd,"nom : %s\nPrenom : %s \n Age : %d\nPoids : %.2f\n Sexe : %c",
                tabPersonne[i].nom,
                tabPersonne[i].prenom,
                tabPersonne[i].age,
                tabPersonne[i].poids,
                tabPersonne[i].sexe);
        printf("\n--------------------------------------------\n");
    }

    for (i = 0; i < NBPERS; i++) {
        printf("nom : %s\nPrenom : %s \n Age : %d\nPoids : %.2f\n Sexe : %c",
                tabPersonne[i].nom,
                tabPersonne[i].prenom,
                tabPersonne[i].age,
                tabPersonne[i].poids,
                tabPersonne[i].sexe);
        printf("\n--------------------------------------------\n");
    }
    
 retour = fclose(fd);
    if (retour == EOF)
    {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
     //------------------------------------------------------
    /*
     * Question 5 : 545 octets
     * 
     * 
     * Question 7 : 560 octets
     * Question 8 : 545 octets - > Il perds 15 octets
     */
    
    
    
}