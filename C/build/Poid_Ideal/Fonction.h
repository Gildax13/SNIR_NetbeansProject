/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Fonction.h
 * Author: apean
 *
 * Created on 23 novembre 2020, 15:25
 */
#include <stdio.h>
#include <stdlib.h>
#ifndef FONCTION_H
#define FONCTION_H

#ifdef __cplusplus
extern "C" {
#endif
#define TABMAX 100
float calculIMC(float poid,float taille);
void afficherFiche(char nom[TABMAX], char prenom[TABMAX], int age,float taille, float poid);
void afficherCorpulence(float imc);
void afficherMenu();
float calculerPoidsLorentz(float taille, char sexe);
float calculerPoidsLorentzAge(float taille, int age);
float calculerPoidsDevine(float taille, char sexe) ;
    
    
    
    
    



#ifdef __cplusplus
}
#endif

#endif /* FONCTION_H */

