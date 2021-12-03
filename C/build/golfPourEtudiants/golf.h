/*********************************************************
 *
 *  NOM 	: golf.h 
 *  TYPE	: APPLICATION
 *  SUJET 	: simulation de jeu de golf
 *  DATE        : 26 janvier 2021
 *  AUTEUR      : PEAN Adrien
 *  
 *
 *  LIMITES	: 20 parcours maximum, 50 parties stockables au maxi
 *  CONTRAINTES	: sous linux pour avoir de la couleur
 *
  *********************************************************/
#ifndef GOLF_H
#define GOLF_H

#include <errno.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/timeb.h>
#include <math.h>
#include <ctype.h>

#define NBMAXPARCOURS 20
#define NBMAXSCORES 50
#define NBMAXTROU 18
#define NBMAXCAR 50

#define FICHIER_SCORE "/home/USERS/ELEVES/SNIR2020/apean/NetBeansProjects/C/build/golfPourEtudiants/scores.bin"
#define FICHIER_PARCOURS "/home/USERS/ELEVES/SNIR2020/apean/NetBeansProjects/C/build/golfPourEtudiants/parcoursGolf.bin"

// distance min et max en fonction des clubs
#define DRIVER_MIN 190.0
#define DRIVER_MAX 210.0
#define BOIS_MIN 150.0
#define BOIS_MAX 190.0
#define FER_MIN 30.0
#define FER_MAX 150.0
#define PUTTER_MIN 1.0
#define PUTTER_MAX 30.0

#define BLACK    "\033[1;30m"
#define RED      "\033[1;31m"
#define GREEN    "\033[1;32m"
#define YELLOW   "\033[1;33m"
#define BLUE     "\033[1;34m"
#define PURPLE   "\033[1;35m"
#define CYAN     "\033[1;36m"
#define GREY     "\033[1;37m"

/****************************************
definition du type enum: enumPoint
******************************************/
typedef enum {CONDOR = -4, ALBATROS, EAGLE, BIRDIE, PAR, BOGEY, DOUBLE_BOGEY, TRIPLE_BOGEY} enumPoint;

/****************************************
definition du type : typeTrou
******************************************/
typedef struct
{
    int numero;
    float distance;
    int par;
    int nbMaxCoups;
}typeTrou;

/****************************************
definition du type : typeParcours
******************************************/
typedef struct
{
    char nom[49];
    int nbTrou;
    typeTrou listeTrous[]; 
}typeParcours;
/****************************************
definition du type : typeScore
******************************************/
typedef struct
{
	char nomJoueur[NBMAXCAR];
	int difficulte;
	typeParcours parcoursJoue; // le parcours auquel le score se rapporte
	int points[NBMAXTROU]; // tableau des scores pouvant aller jusqu'a 18 trous
}typeScore;


int creerParcours( typeParcours *tab[], int nbParcours );
void afficherUnParcours( typeParcours *tab[], int nro );

int chargerParcours( typeParcours *tab[] );
typeScore *jouerParcours( typeParcours *p );
void jouerParcoursADeux( typeParcours *p );
float aleatoire( float maxAlea );
float lancement( float min, float max );
void afficherScore( typeScore * );
void classement( typeScore *tab[], int nbScore );
void jouerParcoursADeux( typeParcours *p );
void afficherInfoTrou( typeTrou unTrou);
void afficherMenu(int nbParcours);
typeScore *jouerParcours( typeParcours *p );
void afficherLesParcours( typeParcours *tab[], int nbParcours );
void jouerParcoursADeux( typeParcours *p );
/************************************************************
	fonctions a coder/completer
************************************************************/


void sauvegarderParcours( typeParcours *tab[], int nbParcours );





#endif
