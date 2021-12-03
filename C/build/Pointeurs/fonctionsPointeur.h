/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fonctionsPointeur.h
 * Author: apean
 *
 * Created on 26 novembre 2020, 09:19
 */

#ifndef FONCTIONSPOINTEUR_H
#define FONCTIONSPOINTEUR_H

#define NBCARMAXNOM 70
#define NBCARMAXPRENOM 50

#ifdef __cplusplus
extern "C" {
#endif

char * moisNom(int numMois);

typedef struct personne{
    char nom[NBCARMAXNOM];
    char prenom[NBCARMAXPRENOM];
    unsigned int annee;
    float taille;
    float poids;
}typePersonne;

typePersonne creePersonne();

void affichePersonne(typePersonne p);
typePersonne *creePersonnePtr();
void affichePersonnePtr(typePersonne *p);
void separation();






#ifdef __cplusplus
}
#endif

#endif /* FONCTIONSPOINTEUR_H */

