/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: apean
 *
 * Created on 13 octobre 2020, 13:19
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <sys/timeb.h>
#include <math.h>
#include <ctype.h>
#include <unistd.h>
#include <time.h>
#include <sys/random.h>

// attendre un maxTime millisecondes

void msleep(unsigned int maxTime) {
    /*
    struct timespec {
    time_t tv_sec;        // secondes
    long   tv_nsec;       // nanosecondes
};
     */
    struct timespec req;
    struct timespec rem;
    time_t secondes = 0;
    long nanoSecondes = 0;
    if (maxTime >= 1000) {
        do {
            secondes++;
            maxTime -= 1000;
        } while (maxTime >= 1000);
    }
    nanoSecondes = maxTime * 1000000;
    req.tv_sec = secondes;
    req.tv_nsec = nanoSecondes;
    nanosleep(&req, &rem);

}

/**
 * 
 * @param maxAlea valeur max de l'aleatoire
 * @return retourne une valeur entiere E[0..maxAlea[
 */
unsigned int aleatoire(unsigned int maxAlea) {
    struct timeb t;
    float a, b;
    unsigned int nbmilli;
    ftime(&t);
    nbmilli = t.time * 1000 + t.millitm;
    srand(nbmilli);
    a = rand();
    b = (maxAlea * a) / RAND_MAX;
    msleep(250);
    return ( (unsigned int) b);


}

int main(int argc, char** argv) {
   
    //Déclaration des variables utiles au jeu
    int val1;
    int val2;
    int val3;
    int val4;
    int valalea1;
    int valalea2;
    int valalea3;
    int valalea4;
    int win = 0;
    int nbTours = 0;
    int valBonne = 0;
    int valFausse=0;
    //valeur aléatoire fournie par la Machine (valeur a trouvée pour gagner)
    valalea1 = aleatoire(9);
    valalea2 = aleatoire(9);
    valalea3 = aleatoire(9);
    valalea4 = aleatoire(9);
    printf("Voici la solutions : %d %d %d %d", valalea1, valalea2, valalea3, valalea4); //retirez le commentaire de cette ligne pour voir les 4 veleurs aléatoire pour tester si vous avez gagnez


    do{
        
       //Detection de Victoire
         if (val1 == valalea1 && val2 == valalea2 && val3 == valalea3 && val4 == valalea4) {
            printf("\n----------------------[MinorMind]----------------------");
            printf("\nBravo !! Vous avez gagné le MinorMind");
            win=1;
            printf("\nLe nombre de tours que vous avez éffectué est de : %d",nbTours);
            printf("\n----------------------[MinorMind]----------------------");
            return (EXIT_SUCCESS);
        }else {
            printf("\n----------------------[MinorMind]----------------------");
            valBonne=0;
            valFausse=0;
        printf("\nSaisissez une par une les 4 valeurs\n");//Lecture des 4 valeurs saisie par le Joueur
        scanf("%d", &val1);
        scanf("%d", &val2);
        scanf("%d", &val3);
        scanf("%d", &val4);
        nbTours++;
        printf("\n----------------------[MinorMind]----------------------");
        }
        
        if(val1==valalea1){
            valBonne++;
            
        }else{
            valFausse++;
        }
       
        if(val2==valalea2){
            valBonne++;
            
        }else{
            valFausse++;
        }
        
        if(val3==valalea3){
            valBonne++;
            
        }else{
            valFausse++;
        }
        
        if(val4==valalea4){
            valBonne++;
            
        }else{
           valFausse++;
        }
        
        printf("\nIl y a %d Valeur bonne dans la proposition",valBonne);
        printf("\nIl y a %d Valeur fausse dans la proposition",valFausse);
        
        
        
        
        
        
    }while (win = 1);

    

    return (EXIT_SUCCESS);
}