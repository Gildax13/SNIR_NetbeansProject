/* 
 * File:   poker.c
 * Author: 
 *
 * Created on 28 novembre 2019, 08:53
 * Modified on 
 * Description : définition des fonctions pour le poker aux dés
 */
#include "poker.h"

void msleep(unsigned int maxTime)
{

    struct timespec req;
    struct timespec rem;
    time_t secondes = 0;
    long nanoSecondes = 0;
    if (maxTime >= 1000)
    {
        do
        {
            secondes++;
            maxTime -= 1000;
        }
        while (maxTime >= 1000);
    }
    nanoSecondes = maxTime * 1000000;
    req.tv_sec = secondes;
    req.tv_nsec = nanoSecondes;
    nanosleep(&req, &rem);

}

unsigned int aleatoire(unsigned int maxAlea)
{
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



int calculerScore(int des[], int nbDes)
{
    unsigned int idem[NBFACES] = {0, 0, 0, 0, 0, 0};
    // compteurs de combinaison
    int paire = 0, brelan = 0, carre = 0, poker = 0;
    int score = 0;
    // faire le compte des faces identiques pour chaque valeur de face
    for (int i = 0; i < nbDes; i++)
    {
        idem[des[i]]++;
    }
    // pour chaque face de des, compter le nombre d'occurence
    for (int i = 0; i < NBFACES; i++)
    {
        if (idem[i] == 2)
        {
            paire++;

        }
        if (idem[i] == 3)
        {
            brelan++;

        }
        if (idem[i] == 4)
        {
            carre++;

        }
        if (idem[i] == 5)
        {
            poker++;

        }
    }
    // application de la pondération pour chaque combinaison pour avoir le score
    score = paire * 10 + brelan * 30 + carre * 60 + poker * 70;

    return score;

}

void afficherCombinaison(int des[],int nbDes){
    int i;
    for(i=0;i<nbDes;i++){
        printf("Le des numéro %d est égale a %d",i+1,des[i]);
    }
    
}		

int demanderMise(int solde){
    int mise;
    do{
        printf("Quelle est votre mise ? (Solde actuel = %d",solde);
        scanf("%d",&mise);
    }while(mise>solde);
    return mise;
}	
int testerAge(int age,int ageLimite){
    int renvoie=-1;
    if(age>=ageLimite){
        renvoie=0;
    }
    return renvoie;
} 
int lancerUnDes(int nbFace){
    int des;
    des = aleatoire(nbFace)+1;
    return des;
}	