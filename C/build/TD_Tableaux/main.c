/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: apean
 *
 * Created on 23 novembre 2020, 15:17
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NBELEVES 20
#define NBMAXCAR 250

#define NBJOURS 5

#define TAILLEMAX 10


/*
 * 
 */
int main(int argc, char** argv) {
/*
    int tabnotes[NBELEVES];
    int i;
    int notes;
   
    
    
    for (i = 0;i<NBELEVES;i++){
         do{
        printf("Saisissez la note de l'eleve n° %d : ",i+1);
        scanf("%d",&notes);
        tabnotes[i]=notes; 
        }while(notes<0 || notes>20);  
    }
    
    for (i= 0;i<NBELEVES;i++){
        printf("L'élève numéro %d a eu la note %d / 20\n",i+1,tabnotes[i]);
        
    }

    //|-----------------------------------------------------\//
    float temperaturesMin[NBJOURS]={-10, 5, -2, 0, -3};
    float temperaturesMax[NBJOURS]={3, 10, 4, 12, 8};
    int indexMini;
    int jourMini;
    float tempMini;
    
    // recherche de la plus petite des temperatures min
    tempMini=temperaturesMin[0];
    jourMini=0;
    for (indexMini=0;indexMini<NBJOURS;indexMini++)
    {
        // la temperature courante est plus petite que la mini
        if (tempMini>temperaturesMin[indexMini])
        {
            // la mini prend la valeur de la temperature courante
            tempMini=temperaturesMin[indexMini]; 
            // jour de la temperature mini est l'index dans le tableau
            jourMini=indexMini;
        }
    }
    // affichage de la plus petite des temperatures mini ainsi que le jour correspondant
    printf("La temperature la plus faible est  %.2f au %d ieme jour \n",tempMini,jourMini+1);

    
//|-----------------------------------------------------\//
     int tabVal[TAILLEMAX];
    int tabValNeg[TAILLEMAX];
    int tabValPos[TAILLEMAX];
    int nbVal;
    int cptNulles;
    int i, iPos, iNeg;
    int sommeNeg;
    int miniPos, maxiPos;
    // demande du nombre de valeurs a saisir [1..TAILLEMAX]
    do {
        printf("Combien de valeurs pour tabVal ?");
        scanf("%d", &nbVal);
    } while (nbVal <= 0 || nbVal > TAILLEMAX);



    // remplissage de tabVal
    for (i = 0; i < nbVal; i++) {
        printf("val%d : ", i + 1);
        scanf("%d", &tabVal[i]);
    }
    // remplissage tabValNeg et tabValPos
    iPos = 0;
    iNeg = 0;
    cptNulles = 0;
    for (i = 0; i < nbVal; i++) {
        if (tabVal[i] < 0) {
            tabValNeg[iNeg] = tabVal[i];
            iNeg++;
        }
        if (tabVal[i] > 0) {
            tabValPos[iPos] = tabVal[i];
            iPos++;
        }
        if (tabVal[i] == 0) {
            cptNulles++;
        }
    }
    //somme des valeurs negatives
    if (iNeg > 0) // il y a au moins une valeur negative
    {
        sommeNeg = 0;
        for (i = 0; i < iNeg; i++) {
            sommeNeg = sommeNeg + tabValNeg[i];
        }
        printf("la somme des valeurs negative est : %d\n", sommeNeg);
    } else {
        printf("Il n'y a pas de valeurs negatives dans le tableau\n");

    }
    //recherche des extremas du tableau des positifs
    if (iPos > 0) { // il y a au moins un positif
        miniPos = tabValPos[0];
        maxiPos = tabValPos[0];
        for (i = 0; i < iPos; i++) {
            if (miniPos > tabValPos[i]) {
                miniPos = tabValPos[i];
            }
            if (maxiPos < tabValPos[i]) {
                maxiPos = tabValPos[i];
            }
        }
        printf("Val mini des positifs : %d\n", miniPos);
        printf("Val maxi des positifs : %d\n", maxiPos);
    } else {
        printf("Il n'y a pas de valeurs positives dans le tableau\n");
    }
    */
    int tab[TAILLEMAX];
    int tabEnvers[TAILLEMAX];
    int valeur = 0;
    //int j = 9;
    
    int i=0;
    
    for(i=0;i<TAILLEMAX;i++){
        printf("\nSaisir Valeur : ");
        scanf(" %d",&valeur);
        tabEnvers[TAILLEMAX-1-i]=valeur;
        tab[i]=valeur;
        /*        tabEnvers[j]=tab[i];
        j--;*/
        
    }    
    
    printf("\nvoici la chaine a l'endroit : ");
    for(i=0;i<TAILLEMAX;i++){
        printf("%d",tab[i]);
        
    }
      printf("\nvoici la chaine a l'envers : ");
    for(i=0;i<TAILLEMAX;i++){
       
        printf("%d",tabEnvers[i]);
    }
   /* printf("\nvoici la chaine a l'envers : ");
    for(j=0;j<=9;j++){
        printf("%d",tabEnvers[j]);
    }
    */
    return (EXIT_SUCCESS);
}

