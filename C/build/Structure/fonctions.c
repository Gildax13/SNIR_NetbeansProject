
#include "fonctions.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
typePersonne creePersonne(){
    typePersonne p1;
    
    printf("Saisissez le nom : \n");
    scanf("%s",p1.nom);
    printf("Saisissez le prenom : \n");
    scanf("%s",p1.prenom);
    printf("Saisissez l'année de naissance : \n");
    scanf("%d",&p1.annee);
    printf("Saisissez la taille : \n");
    scanf("%f",&p1.taille);
    printf("Saisissez le poids : \n");
    scanf("%f",&p1.poids);        
    
    return p1;
    
}


void afficherPersonne(typePersonne personne){
    
    printf("--------------------------------\n");
    printf("Nom :                   %s\n",personne.nom);
    printf("Prenom :                %s\n",personne.prenom);
    printf("Année de naissance :    %d\n",personne.annee);
    printf("Taille :                %.2f\n",personne.taille);
    printf("Poids :                 %.2f\n",personne.poids);
    printf("--------------------------------\n");
    
    
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
    printf("--------------------------------\n");
    printf("Nom :                   %s\n",p->nom);
    printf("Prenom :                %s\n",p->prenom);
    printf("Année de naissance :    %d\n",p->annee);
    printf("Taille :                %.2f\n",p->taille);
    printf("Poids :                 %.2f\n",p->poids);
    printf("--------------------------------\n");
}


adherent *nouvelAdherentPtr(){
    adherent *ad;
    ad=(adherent *)malloc(sizeof(adherent));
    
    printf("Donner le nom ");
    scanf("%s",ad->nom);
     printf("Donner le prenom ");
    scanf("%s",ad->prenom);
     printf("Donner votre numéro de badge ");
    scanf("%d",&ad->numBadge);
     printf("Donner votre numéro d'activité ");
    scanf("%d",&ad->numActivite);

    
    
    return ad;
}

void afficheAdherentPtr(adherent *ad){
    printf("--------------------------------\n");
    printf("Nom :                   %s\n",ad->nom);
    printf("Prenom :                %s\n",ad->prenom);
    printf("Numéro de Badge :       %d\n",ad->numBadge);
    printf("Numéro activité :       %d\n",ad->numActivite);
    printf("--------------------------------\n");
}







