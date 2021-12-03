/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fonctions.h
 * Author: apean
 *
 * Created on 5 janvier 2021, 13:10
 */

#ifndef FONCTIONS_H
#define FONCTIONS_H

#define NBCARMAXNOM 255
#define NBCARMAXPRENOM 255


#ifdef __cplusplus
extern "C" {
#endif
    
    typedef struct {
	char nom[NBCARMAXNOM];
	char prenom[NBCARMAXPRENOM];
	int annee;
	float taille;
	float poids;
}typePersonne;
void afficherPersonne(typePersonne personne);
typePersonne creePersonne();

typePersonne *creePersonnePtr();
void affichePersonnePtr(typePersonne *p);


    
typedef struct {
	char nom[NBCARMAXNOM];
	char prenom[NBCARMAXPRENOM];
	int numBadge;
        int numActivite;
}adherent;    
    
adherent *nouvelAdherentPtr();
void afficheAdherentPtr(adherent *ad);   
    
#ifdef __cplusplus
}
#endif

#endif /* FONCTIONS_H */

