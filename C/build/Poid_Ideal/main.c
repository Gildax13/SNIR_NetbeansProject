/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: apean
 *
 * Created on 23 novembre 2020, 15:23
 */

#include <stdio.h>
#include <stdlib.h>

#include "Fonction.h"

/*
 * 
 */

#define TABMAX 100



int main(int argc, char** argv) {
    char nom[TABMAX],prenom[TABMAX],sexe;
    int age = 0 ;
    float poid = 0 ,taille = 0 ;
    float imc = 0 ;
    char choix;
    float poidsIdeal;
    
    printf("nom : ");
    scanf(" %s",nom);
    printf("prenom : ");
    scanf(" %s",prenom);
    printf("sexe (h ou f): ");
    scanf(" %c",&sexe);
    printf("age : ");
    scanf(" %d",&age);
    printf("taille (en m) : ");
    scanf(" %f",&taille);
    printf("poids (en kg) : ");
    scanf(" %f",&poid);
   
    afficherFiche(nom,prenom,age,taille,poid);
    
    imc = calculIMC(poid,taille);
    printf("\nVotre IMC est de %f",imc);
    
    afficherCorpulence(imc);
    
    afficherMenu();
    scanf(" %s",&choix);
    
    switch(choix){
        case 'a': poidsIdeal=calculerPoidsLorentz(taille,sexe);
        printf("Le poids Ideal selon Lorentz est : %f",poidsIdeal);
        break;
        case 'b': poidsIdeal=calculerPoidsDevine(taille,sexe);
        printf("Le poids Ideal selon Devine est : %f",poidsIdeal);
        
        break;
        case 'c': poidsIdeal=calculerPoidsLorentzAge(taille,age);
        printf("Le poids Ideal selon Lorentz en fonction de l'age est : %f",poidsIdeal);
        
        break;
        case 'q': printf("Vous avez décider quitter! ");
        break;
        
    }
    
    return (EXIT_SUCCESS);
}

