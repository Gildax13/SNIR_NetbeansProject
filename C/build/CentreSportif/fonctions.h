
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fonctions.h
 * Author: apean
 *
 * Created on 5 janvier 2021, 14:34
 */

#ifndef FONCTIONS_H
#define FONCTIONS_H
#define FONCTIONS_H
#define NBMAXCAR 50
#define NBACTIVITESMAX 5

#ifdef __cplusplus
extern "C" {
#endif
    
typedef enum {NATATION=1,BASKETBALL,HANDBALL,SQUASH,TENNIS} sports;
typedef struct {
	int jours;
	int mois;
	int annee;
}typeDate;

typedef struct {
	char nom[NBMAXCAR];
	char prenom[NBMAXCAR];
	//int annee;
        typeDate date;
        unsigned int nbActivites;
	sports activites[NBACTIVITESMAX];
	int numCarte;
}typeAdherent;








void afficherMenu();
void afficherActivite(sports);
void afficherUnAdherent(typeAdherent *ad);
typeAdherent *creerUnAdherent();
void afficherDate(typeDate date);
int sauvegarderAdherent(typeAdherent *tab[],int nb);
int chargerAdherent( typeAdherent *tab[]);
void afficherActivite(sports sports, int nb);
int supprimerUnAdherent(typeAdherent *tab[], int nro, int nb);
void choisirActivites(typeAdherent *ad, int nbActivites);
void afficherLesAdherents(typeAdherent *tab[], int nb);
void afficherUnAdherent(typeAdherent *ad);
int numAdherent(typeAdherent *ad[], int nb);

#ifdef __cplusplus
}
#endif

#endif /* FONCTIONS_H */

