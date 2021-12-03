/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: apean
 *
 * Created on 14 janvier 2021, 10:30
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int retour;
    FILE* fd;
    unsigned int largeur;
    unsigned int longueur;
    unsigned int nbCouleurs;
    
    
    fd = fopen("/home/USERS/ELEVES/SNIR2020/imgBMP/image256Couleurs.bmp", "r");
    if (fd == NULL) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    //----------------------------Positionnement
    retour = fseek(fd,2+4+4+4+4,SEEK_SET);
    if (retour == -1) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    //-----------------------------Largeur :
    retour = fread(&largeur,sizeof (unsigned int), 1,fd);
     if (retour == -1) {
        printf("Erreur de lecture avec Fread : %s\n", strerror(errno));
        exit(errno);
    }
    
    
    //-----------------------------Hauteur : 
    retour = fread(&longueur,sizeof (unsigned int), 1,fd);
     if (retour == -1) {
        printf("Erreur de lecture avec Fread : %s\n", strerror(errno));
        exit(errno);
    }
      //-----------------------------NbCouleurs : avec repositionnement
    //retour = fseek(fd,2+4+4+4+4+4+4+2+2+4+4+4+4,SEEK_SET);
    retour = fseek(fd,2+2+4+4+4+4,SEEK_CUR);
    retour = fread(&nbCouleurs,sizeof (unsigned int), 1,fd);
     if (retour == -1) {
        printf("Erreur de lecture avec Fread : %s\n", strerror(errno));
        exit(errno);
    }
    
    
   //------------------------------
     retour = fclose(fd);
    if (retour == EOF)
    {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    
     printf("Largeur de l'image = %u\n",largeur);
     printf("Longueur de l'image = %u\n",longueur);
     printf("Nombre de couleurs sur l'image : %u\n",nbCouleurs);
    
    return (EXIT_SUCCESS);
}

