/* 
 * File:   fonctions.c
 * Author: apean
 *
 * Created on 27 janvier 2021, 08:00
 */

#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"
#include <errno.h>
#include <string.h>

void afficherSteganoTxt(char nomFichier[200], int pas) {
    FILE *fd;
    size_t retour;
    
    char code;
    int i = 0;
    fd = fopen(nomFichier, "r");
    if (fd == NULL) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    retour = fseek(fd, sizeof (typeEnTeteImageBmp) + sizeof (typeEnTeteFichierBmp) + sizeof (typeCouleur) * 256, SEEK_SET);
    if (retour == -1) {
        printf("Mauvais grand déplacement %s\n", strerror(errno));
        exit(errno);
    }
    while (!(feof(fd))) {

        retour = fread(&code, sizeof (char), 1, fd);
        if (retour != 1) {
            printf("Erreur lecture %s\n", strerror(errno));
            exit(errno);

        }
        retour = fseek(fd, pas, SEEK_CUR);
        if (retour == -1) {
            printf("Mauvais déplacement %s\n", strerror(errno));
            exit(errno);
        }


        printf("%c", code);
    }
    retour = fclose(fd);
    if (retour == EOF) {
        printf(" Erreur fermeture %s\n", strerror(errno));
        exit(errno);
    }


}

void extraireSteganoImg(char chemin[200], int pas, char nomFNouveau[200]) {
    FILE *fd, *fd2;
    size_t retour;
    char code;
    int i = 0;
    fd = fopen(chemin, "r");
    if (fd == NULL) {
        printf("Pb ouverture fichier 1 %s\n", strerror(errno));
        exit(errno);
    }
    fd2 = fopen(nomFNouveau, "w");
    if (fd2 == NULL) {
        printf("Pb ouverture fichier 2 %s\n", strerror(errno));
        exit(errno);
    }
    retour = fseek(fd, sizeof (typeEnTeteImageBmp) + sizeof (typeEnTeteFichierBmp) + sizeof (typeCouleur) * 256, SEEK_SET);
    if (retour == -1) {
        printf("Mauvais grand déplacement %s\n", strerror(errno));
        exit(errno);
    }

    while (!(feof(fd))) {

        retour = fread(&code, sizeof (char), 1, fd);
        if (retour != 1) {
            printf("Erreur lecture %s\n", strerror(errno));
            exit(errno);

        }
        retour = fwrite(&code, sizeof (char), 1, fd2);
        if (retour != 1) {
            printf("%s\n", strerror(errno));
            exit(errno);
        }
        retour = fseek(fd, pas, SEEK_CUR);
        if (retour == -1) {
            printf("Mauvais déplacement %s\n", strerror(errno));
            exit(errno);
        }


    }

    retour = fclose(fd2);
    if (retour == EOF) {
        printf(" Erreur fermeture %s\n", strerror(errno));
        exit(errno);
    }
    retour = fclose(fd);
    if (retour == EOF) {
        printf(" Erreur fermeture %s\n", strerror(errno));
        exit(errno);
    }
}

void cachePalette(char *messageCacher, char *fichierDST, char *fichierSRC) {
    FILE *fd, *fd2;
    size_t retour;
    typeEnTeteFichierBmp enTeteFic;
    typeEnTeteImageBmp enTeteImg;
    typeCouleur palette[256];
    unsigned char tailleMessage;
    
   unsigned char octet;
    int i = 0;
    int nbDoneesIMG;
    
    fd = fopen(fichierSRC, "r");
    if (fd == NULL) {
        printf("Pb ouverture fichier 1 %s\n", strerror(errno));
        exit(errno);
    }
    fd2 = fopen(fichierDST, "w");
    if (fd2 == NULL) {
        printf("Pb ouverture fichier 2 %s\n", strerror(errno));
        exit(errno);
    }
    retour = fread(&enTeteFic, sizeof (typeEnTeteFichierBmp), 1, fd);
        if (retour != 1) {
            printf("Erreur lecture  entete fichier%s\n", strerror(errno));
            exit(errno);

        }
    retour = fwrite(&enTeteFic, sizeof (typeEnTeteFichierBmp), 1, fd2);
        if (retour != 1) {
            printf("Erreur ecriture  entete fichier%s\n", strerror(errno));
            exit(errno);

        }
    retour = fread(&enTeteImg, sizeof (typeEnTeteImageBmp), 1, fd);
        if (retour != 1) {
            printf("Erreur lecture entete img %s\n", strerror(errno));
            exit(errno);

        }
    retour = fwrite(&enTeteImg, sizeof (typeEnTeteImageBmp), 1, fd2);
        if (retour != 1) {
            printf("Erreur ecriture entete img%s\n", strerror(errno));
            exit(errno);

        }    
    retour = fread(palette, sizeof ( typeCouleur), 256, fd);
    if (retour != 256) {
        printf("erreur lecture palette %s\n", strerror(errno));
            exit(errno);
    }
    tailleMessage=strlen(messageCacher);
    palette[0].alpha=tailleMessage;
    for(int i = 0;i<=tailleMessage;i++){
        palette[i].alpha = messageCacher[i-1];
    }
    
    retour = fwrite(palette, sizeof (typeCouleur), 256, fd2);
    if (retour != 256) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    
    nbDoneesIMG = enTeteFic.tailleFichier - sizeof (typeEnTeteFichierBmp) - sizeof (typeEnTeteImageBmp) - sizeof (typeCouleur);
    for (i = 0; i < nbDoneesIMG; i++) {
        retour = fread(&octet, sizeof (char), 1, fd);
        if (retour !=1) {
            printf("probleme lecture données %s\n", strerror(errno));
            exit(errno);
        }
        retour = fwrite(&octet, sizeof (char), 1, fd2);
        if (retour !=1) {
            printf("pb ecriture données %s\n", strerror(errno));
            exit(errno);
        }
    }
    

    retour = fclose(fd2);
    if (retour == EOF) {
        printf(" Erreur fermeture %s\n", strerror(errno));
        exit(errno);
    }
    retour = fclose(fd);
    if (retour == EOF) {
        printf(" Erreur fermeture %s\n", strerror(errno));
        exit(errno);
    }
}
