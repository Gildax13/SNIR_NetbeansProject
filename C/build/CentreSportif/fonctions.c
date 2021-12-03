/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "fonctions.h"
#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

#define TABVAL 5000

void afficherMenu(int compteurFiche) {
    printf("-----------------------------------\n");
    printf("A : Ajouter une fiche adhérent\n");
    if (compteurFiche != 0) {
        printf("S : Supprimer une Fiche\n");
        printf("M : Modifier une Fiche\n");
        printf("V : Voir un fiche\n");
        printf("L : Voir toutes les fiches\n");
        printf("E : Supprimer toutes les fiches\n");
    }
    printf("Q : Quitter \n");
    printf("-----------------------------------\n");

}

void afficherActivite(sports sports, int nb) {
    char *tabSport[5] = {"natation", "basketball", "handball", "squash", "tennis"};
    printf("Activitée chosie : %s", tabSport[nb])
}

typeAdherent *creerUnAdherent() {
    int nb;
    typeAdherent *personne;
    personne = (typeAdherent *) malloc(sizeof (typeAdherent));
    printf("Nom de l'adherent : \n");
    scanf("%s", personne->nom);
    printf("Prenom de l'adherent : \n");
    scanf("%s", personne->prenom);
    printf("Jour de naissance : \n");
    scanf("%d", &personne->date.jours);
    printf("Mois de naissance : \n");
    scanf("%d", &personne->date.mois);
    printf("Année de naissance : \n");
    scanf("%d", &personne->date.annee);
    afficherDate(personne->date);
    printf("\nIndiquez le nombre d'activités a pratiquer : \n");
    scanf("%u", &personne->nbActivites);
    //for de 0 a pêrsonne nb activité -1
    printf("Voici la liste des activités : \n"
            "NATATION = 1,\n"
            "BASKETBALL = 2,\n"
            "HANDBALL = 3,\n"
            "SQUASH = 4,\n"
            "TENNIS= 5 \n");
    for (int i = 0; i < personne->nbActivites; i++) {
        printf("Choix d'activités numéro %d\n", i + 1);
        nb = scanf("%d", &personne->activites[i]);
        afficherActivite(sports sports, nb);
    }
    printf("Indiquez les 4 chiffres du numéro de cartes : \n");
    scanf("%d", &personne->numCarte);
    return personne;
}

void ajouterUnAdherent(typeAdherent *tab[], int nb) {

}

int numAdherent(typeAdherent *ad[], int nb) {
    unsigned int numSaisi;
    int indice;
    int indiceAdherent = -1;

    printf("Indiquez les 4 chiffres du numéro de carte de l'adherent : ")
    scanf("%u", &numSaisi);

    for (indice = 0; indice < nb; indice++) {
        if (numSaisi == (ad[indice]->numCarte)) {
            printf("Numéro de carte %d trouvé, fiche numéro : %d", ad[indice]->numCarte, indice + 1);
            indiceAdherent = indice;
        }
    }
    return indiceAdherent
}

void afficherUnAdherent(typeAdherent *ad) {

    printf("\n--------------Fiche de l'adherent--------------\n");
    printf("Nom :                   %s\n", ad->nom);
    printf("Prenom :                %s\n", ad->prenom);
    printf("Date de naissance :     ");
    afficherDate(ad->date);
    printf("\nNombre d'activités :    %u\n", ad->nbActivites);
    printf("Numéro de Cartes :      %d\n", ad->numCarte);
}

void afficherDate(typeDate date) {
    printf("%d/%d/%d", date.jours, date.mois, date.annee);
}

void afficherLesAdherents(typeAdherent *tab[], int nb) {
    for (int i = 0; i < nb; i++) {
        afficherUnAdherent(tab[i]);
    }
}

void choisirActivites(typeAdherent *ad, int nbActivites) {
    int choixSport = 0;
    int indiceSport;

    printf("Voici la liste des activités : \n"
            "NATATION = 1,\n"
            "BASKETBALL = 2,\n"
            "HANDBALL = 3,\n"
            "SQUASH = 4,\n"
            "TENNIS= 5 \n");

    for (indiceSport = 0; indiceSport < nbActivites; indiceSport++) {
        printf("Choix du sport numéro %d\n", indiceSport + 1);
        nb = scanf("%d", &choixSport);
        //afficherActivite(sports sports,nb);
        switch (choixSport) {
            case 1:
                ad->activites[indiceSport] = NATATION;
                break;
            case 2:
                ad->activites[indiceSport] = BASKETBALL;
                break;
            case 3:
                ad->activites[indiceSport] = HANDBALL;
                break;
            case 4:
                ad->activites[indiceSport] = SQUASH;
                break;
            case 5:
                ad->activites[indiceSport] = TENNIS;
                break;
        }



    }

}

int supprimerUnAdherent(typeAdherent *tab[], int nro, int nb) {

    strcpy(tab[nro], "\0");
    for (int i = 0; i < nb; i++) {
        strcpy(tab[nro], tab[nro+1]);
        nro++;
    }
    nb--;
    return nb;
}
/*
int sauvegarderAdherents(typeAdherent *tab[], int nb) {
    FILE *fd;
    char nomFichier[255];
    printf("Donnez le nom du fichier de sauvegarde : ");
    scanf("%s", nomFichier);

    // OUVERTURE 
    fd = fopen(nomFichier, "w");
    if (fd == NULL) {
        printf("Erreur d'ouverture du fichier\n");
        return -1;
    }
    // ECRITURE
    // ecriture du nombre d'adhérent
    if (fwrite(&nb, sizeof (int), 1, fd) != 1) {
        printf("Erreur d'écriture de nb\n");
        return -1;
    }
    // ecriture des adherents
    int i;
    for (i = 0; i < nb; i++) {
        if (fwrite(tab[i], sizeof (typeAdherent), 1, fd) != 1) {
            printf("Erreur d'écriture d'adhérent\n");
            return -1;
        }
    }
    // FERMETURE
    fclose(fd);
    return i;
}

int chargerAdherent(typeAdherent *tab[]) {

    FILE *fd;
    char nomFichier[255];
    printf("Donnez le nom du fichier de sauvegarde : ");
    scanf("%s", nomFichier);

    // OUVERTURE 
    fd = fopen(nomFichier, "w");
    if (fd == NULL) {
        printf("Erreur d'ouverture du fichier\n");
        return -1;
    }

    //Lecture du nombre d'adhérents
    int nb = 0;
    if (fread(&nb, sizeof (int), 1, fd) != 1) {
        printf("Erreur de lecture pour nb\n");
        return -1;
    }
    typeAdherent *ad;
    int i;
    for (i = 0; i < nb; i++) {
        //Reservation de la mémoire pour un adherent
        ad = malloc(1 * sizeof (typeAdherent));

        if (fread(ad, sizeof (typeAdherent), 1, fd) != 1) {
            printf("Erreur de lecture pour adherent\n");
            return -1;
        }
        tab[i] = ad;
    }

    fclose(fd);
    return nb;
}
 */

