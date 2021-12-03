/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "gestionPendu.h"
#include<time.h>

int afficherMenu() {
    int choix = 0;
    do {
        printf("----------|Pendu|----------\n");
        printf("Vous allez commencer une\n");
        printf("partie du jeu du Pendu\n");
        printf("Pour continuer taper 1\n");
        printf("Pour arreter taper 0\n");
        printf("----------|Pendu|----------\n");
        scanf("%d", &choix);
        if (choix == 1) {
            printf("----------|Pendu|----------\n");
            printf("Vous avez donc choisi de \n");
            printf("continuer \n");
            printf("Bonne chance !\n");
        }else{
            if(choix==0){
           printf("----------|Pendu|----------\n");
            printf("Vous avez donc choisi de \n");
            printf("quitter \n");
            printf("Au revoir !\n"); 
            }
        }
    } while (!(choix == 1 || choix == 0));
    return choix;
}

void afficherPendu(int nroErreur) {
    switch (nroErreur) {
        case 1:
            printf("--|--");
            break;
        case 2:
            printf("  |  \n");
            printf("  |  \n");
            printf("  |  \n");
            printf("  |  \n");
            printf("  |  \n");
            printf("--|--\n");
            break;
        case 3:
            printf("--|-----\n");
            printf("  |  \n");
            printf("  |  \n");
            printf("  |  \n");
            printf("  |  \n");
            printf("--|--\n");
            break;
        case 4:
            printf("--|-/---\n");
            printf("  |/ \n");
            printf("  |  \n");
            printf("  |  \n");
            printf("  |  \n");
            printf("--|--\n");
            break;
        case 5:
            printf("--|-/----|\n");
            printf("  |/     0\n");
            printf("  |  \n");
            printf("  |  \n");
            printf("  |  \n");
            printf("--|--\n");
            break;
        case 6:
            printf("--|-/----|\n");
            printf("  |/     0\n");
            printf("  |     /|\\n");
            printf("  |  \n");
            printf("  |  \n");
            printf("--|--\n");
            break;
        case 7:
            printf("--|-/----|\n");
            printf("  |/     0\n");
            printf("  |     /|\\n");
            printf("  |      |\n");
            printf("  |     / \\n");
            printf("--|--\n");
            break;
    }

}

void afficherLettre(char *histo, int nbLettre) {
    int i;
    
    printf("\nLettres deja proposees : ");
    printf("%s",histo);
    printf("\n");
}

int motEstTrouve(char *motATtrouver, char *motPropose) {
    return (strcmp(motATtrouver, motPropose));
}

int placerLettre(char *motATrouver, char *motCourant, char lettrePropose) {
    int flag = 1;
    int i;
    for (i = 0; i < strlen(motATrouver); i++) {
        /* A completer */
    }
    return flag;
}

int verifierLettrePropose(char *lettresProposees, int nbLettreProposee, char lettre) {
    int flag = 1;
    int i;
    for (i = 0; i < nbLettreProposee; i++) {
        if ((lettre == lettresProposees[i]) || (lettre < 'a' || lettre > 'z')) {
            flag = 0;
        }
    }
    return flag;

}

void msleep(unsigned int maxTime) {

    struct timespec req;
    struct timespec rem;
    time_t secondes = 0;
    long nanoSecondes = 0;
    if (maxTime >= 1000) {
        do {
            secondes++;
            maxTime -= 1000;
        } while (maxTime >= 1000);
    }
    nanoSecondes = maxTime * 1000000;
    req.tv_sec = secondes;
    req.tv_nsec = nanoSecondes;
    nanosleep(&req, &rem);

}

unsigned int aleatoire(unsigned int maxAlea) {
    struct timeb t;
    float a, b;
    unsigned int nbmilli;
    ftime(&t);
    nbmilli = t.time * 1000 + t.millitm;
    srand(nbmilli);
    a = rand();
    b = (maxAlea * a) / RAND_MAX;
    msleep(250);
    return ( (unsigned int) b);


}

void initialiserMot(char *motCourant, int longueurMot) {
    int i;
    /* A completer */
    // ajout du \0 apres les - pour que le tableau soit une chaine de caractere
    motCourant[longueurMot] = '\0';
}