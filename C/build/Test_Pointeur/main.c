/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: apean
 *
 * Created on 19 novembre 2020, 09:10
 */

#include <stdio.h>
#include <stdlib.h>

#include <string.h>

char * moisNom(int Num);

int main(int argc, char** argv) {

   /* int *ptrInt;
    char *ptrChar;
    float *ptrFloat;
    printf("Taille d'un int %ld \n taille du pointeur sur int : %ld\n",sizeof(int),sizeof(int*));
     printf("Taille d'un char %ld \n taille du pointeur sur char : %ld\n",sizeof(char),sizeof(char*));
      printf("Taille d'un float %ld \n taille du pointeur sur float : %ld\n",sizeof(float),sizeof(float*));
    
    unsigned char *ptrOctet;
    int unEntier = 0x12345678, i;
    ptrOctet = (char *) &unEntier;
    for(i=0;i<sizeof(unEntier);i++){
        printf("%p : %hhX\n", ptrOctet, *ptrOctet);
        ptrOctet++;
    }
    */
    int Num;
    char * ptr_char;
    
    
    printf("De quel mois voulez vous le nom (1 a 12)");
    scanf("%d",&Num);
    ptr_char= moisNom(Num);
    printf("%s\n",ptr_char);
    
    
    
    return (EXIT_SUCCESS);
}

char * moisNom(int Num){
    char * Mois[12]={"Janvier","Fevrier","Mars","Avril","Mai","Juin","Juillet","Aout","Septembre","octobre","Novembre","Decembre"};
    
    char * retour;
    retour = (char *) malloc(strlen(Mois[Num-1]) * sizeof(char));
    strcpy(retour, Mois[Num-1]);
    
    return retour;
    
}