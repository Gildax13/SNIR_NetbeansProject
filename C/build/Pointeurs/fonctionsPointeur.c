/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "fonctionsPointeur.h"

char *moisNom(int numMois){
    char* mois=NULL;
    char *tabMois[12]={"Janvier",
    "Fevrier","Mars","Avril","Mai","Juin",
    "Juillet","Aout","Septembre","octobre",
    "Novembre","Decembre"};    
    if(numMois>=1 && numMois<=12){
        mois=(char *)malloc(strlen(tabMois[numMois-1])+1);
        strcpy(mois,tabMois[numMois-1]);
    } 
    return mois;
}
typePersonne creePersonne(){
    typePersonne p;

    
    printf("Donner le nom ");
    scanf("%s",p.nom);
     printf("Donner le prenom ");
    scanf("%s",p.prenom);
     printf("Donner l'année ");
    scanf("%d",&p.annee);
     printf("Donner votre taille ");
    scanf("%f",&p.taille);
     printf("Donner le poids ");
    scanf("%f",&p.poids);
    
    
    return p;
}

void affichePersonne(typePersonne p){
    printf("Nom : %s\n",p.nom);
    printf("Prenom : %s\n",p.prenom);
    printf("Année de naissance : %d\n",p.annee);
    printf("Taille : %.2f\n",p.taille);
    printf("Poids : %.2f\n",p.poids);
    
    
}
typePersonne *creePersonnePtr(){
    typePersonne *p;
    p=(typePersonne *)malloc(sizeof(typePersonne));
    
    printf("Donner le nom ");
    scanf("%s",p->nom);
     printf("Donner le prenom ");
    scanf("%s",p->prenom);
     printf("Donner l'année ");
    scanf("%d",&p->annee);
     printf("Donner votre taille ");
    scanf("%f",&p->taille);
     printf("Donner le poids ");
    scanf("%f",&p->poids);
    
    
    return p;
}

void affichePersonnePtr(typePersonne *p){
    printf("Nom : %s\n",p->nom);
    printf("Prenom : %s\n",p->prenom);
    printf("Année de naissance : %d\n",p->annee);
    printf("Taille : %.2f\n",p->taille);
    printf("Poids : %.2f\n",p->poids);
}

void separation(){
    printf("|--------------------------------|\n");
}
