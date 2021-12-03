/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: apean
 *
 * Created on 17 novembre 2020, 14:38
 */

#include <stdio.h>
#include <stdlib.h>
#include "gestionPendu.h"


int main(int argc, char *argv[])
{
	char listeMots[NBMOTS][LONGUEURMAXMOT]={"bonjour","maison","noyau","temps","blond","travail","figure"};
	int cptErreur=0;
	int longueurMot;
	char motATrouver[LONGUEURMAXMOT];
	char motCourant[LONGUEURMAXMOT];
	int choix,i;
	char lettre;
	char histo[NB_MAX_LETTRES_POSSIBLE];
	int cptProposition=0;
	int trouve; // 0 si le mot est trouve
        // boucle permettant de rejouer
	do{
            
            choix = afficherMenu();
            
		if (choix>0){
                    // initialisation des compteur
			cptErreur=0;
			cptProposition=0;
                        // tirage d'un mot aleatoire
			strcpy(motATrouver,listeMots[aleatoire(NBMOTS-1)]);
			longueurMot=strlen(motATrouver);			
                        // initialisation du mot affiche (mettre autant de - que de lettre dans le mot)
			/* A completer */
                        // boucle de jeu
			do{
                            // afficher le mot en -
				printf("%s\n",motCourant);
                                // afficher les lettres deja proposees
				afficherLettre(histo,cptProposition);
                                // demander une lettre non deja proposee au joueur 
				do{
					printf("donnez une lettre :");
					scanf(" %c",&lettre);
				}while(verifierLettrePropose(histo,cptProposition,lettre)==0);
                                // ajouter la nouvelle lettre aux lettre deja proposees
				histo[cptProposition]=lettre;
				cptProposition++;
                                // placement de la nouvelle lettre et mise a jour du compteur d'erreur
				cptErreur+=placerLettre(motATrouver,motCourant,lettre);
                                // afficher le gibet
				/* A completer */
                                //tester si le mot est trouve
				trouve=motEstTrouve(motATrouver,motCourant);
			}while((trouve!=0) && (cptErreur<NB_MAX_ERREUR));   // sortir si le mot est trouve ou si on est pendu
			
			if (trouve==0)
                        {
                            printf("bravo\n");
                        }
			else
                        {
                            printf("Perdu le mot etait %s\n",motATrouver);			
                        }
		}

	}while (choix!=-1);


  return EXIT_SUCCESS;
}