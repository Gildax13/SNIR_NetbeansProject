


/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: apean
 *
 * Created on 8 octobre 2020, 10:45
 */

#include <stdio.h>
#include <stdlib.h>

#include "mesFonctions.h"

/*
 * 
 */

#define NBCARFIN 2
#define NBMAXCAR 50

int main(int argc, char** argv) {

    /* char let;
     printf("Donner la première lettre de votre sexe (h/f)");
     scanf("%c",&let);
    
     afficherMenu(let);
    
     float res,val1,val2;
     printf("Saisissez val 1 puis val2");
    
     scanf("%f",&val1);
     scanf("%f",&val2);
    
     res=additionReels(val1,val2);
     printf("\nResultat : %f",res);
     printf("\nResultat : %f",additionReels(val1,val2));
    
     res=additionReels(val1,3.14);
     printf("\nResultat : %f",res);
     res=additionReels(1.896,3.14);
     printf("\nResultat : %f",res);
     res=additionReels(1.896,val2);
     printf("\nResultat : %f",res);
   

     printf("Saisissez val 1 ");

     scanf("%d",&val1);
    
     afficherCarre(val1);
    
     printf("Saisissez a puis b puis c ");
     float a,b,c;
     scanf("%f",&a);
     scanf("%f",&b);
     scanf("%f",&c);
    
     afficherDelta(a,b,c);
    
     afficherRacines(a,b,c);
    
     int nb;
    
     printf("Saisir Nb d'etoiles\n");
     scanf("%d",&nb);
     afficherLigne(nb);
    
     printf("Saisir Nb pour le carre\n");
     scanf("%d",&nb);
     afficherUnCarre(nb);
    
     printf("Saisir Longueur puis largeur  pour le rectangle\n");
     int largeur, longueur;
     scanf("%d",&longueur);
     scanf("%d",&largeur);
     afficherUnRectangle(longueur,largeur);
        
     
    
    
   
     char mot[NBMAXCAR];
     char terminaison[NBCARFIN]={'e','r'};
     int finEnER;
    
     printf("\ndonner un mot :");
     scanf("%s",mot);
     finEnER=verifTerminaison(mot,terminaison);
     if(finEnER==1){
         printf("%s se termine bien en ER\n",mot);
     }else{
         printf("%s se termine pas en ER\n",mot);
     }
    
    
    */
    
    /*
     char tab[100];
     char chara;
     int nb;
    
     printf("Saisir votre chaine de caractère puis votre caractère\n");
     scanf("%s", tab);
     scanf(" %c",&chara);
    
     nb = compterSymboles(tab,chara);    
    
     printf("Nombre de caractère %c = %d\n",chara,nb);
     
*/
    #define LARGEUR 15
    #define HAUTEUR 9

    unsigned char tab[LARGEUR][HAUTEUR];
    int x,y;
    unsigned char lettre;
    int chiffre;
    int nombreDeCroix;

    initGrille(tab);
    
    do{
        afficherGrille(tab);
        printf("ajouter une croix : lettreChriffre (ex: b4) \n");
        printf("fn avec a-1: ");
        scanf(" %c%d",&lettre,&chiffre);
        if((lettre>='a' && lettre<= 'a' + LARGEUR) && (chiffre >=1 && chiffre<=HAUTEUR)){
            tab[lettre-'a'][chiffre-1]='X';
            
        }
        
    }while (lettre!='a' || chiffre!=-1);
    nombreDeCroix = nbCroix(tab);
    printf("Il y a %d croix \n", nombreDeCroix);





    return (EXIT_SUCCESS);
}

