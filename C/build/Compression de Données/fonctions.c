/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"
#include <string.h>
#pragma pack(push, 1)

void afficheEnTeteFichierBMP(typeEnTeteFichierBmp fichier) {

    printf("signature : %c%c \n", fichier.signature[0], fichier.signature[1]);
    printf("tailleFichier : %u \n", fichier.tailleFichier);
    printf("reserve : %u \n", fichier.reserve);
    printf("adresseImg : %u \n", fichier.adresseImg);


}

void afficheEnTeteImageBMP(typeEnTeteImageBmp fichier) {

    printf("Taille entete : %u \n", fichier.tailleEnTete);
    printf("largeur : %u\n", fichier.largeur);
    printf("Hauteur : %u\n", fichier.hauteur);
    printf("nbPlan : %u\n", fichier.nbPlan);
    printf("bitParPixel : %u\n", fichier.bitParPixel);
    printf(" typeCompression : %u\n", fichier.typeCompression);
    printf("tailleImage : %u\n", fichier.tailleImage);
    printf("resolutionHorizontale : %u\n", fichier.resolutionHorizontale);
    printf("resolutionVerticale : %u\n", fichier.resolutionVerticale);
    printf("nbCouleursUtilises : %u\n", fichier.nbCouleursUtilises);
    printf("nbCouleursImportantes : %u\n", fichier.nbCouleursImportantes);


}

void decompressBmp(char* argSrc, char* argDest) {
    FILE *fichierSource, *fichierDest;
    typeEnTeteFichierBmp enTeteFic;
    typeEnTeteImageBmp enTeteImg;
    typeCouleur palette[NBCOULEURS];
    unsigned char valeurOctet, repetition;
    size_t check;
    unsigned int tailleFichier, tailleImage, typeCompression;
    unsigned char nbOctet;
    //ouvrir fichier source en lecture
    printf("\nVous ouvrez l'image : %s\n", argSrc);

    fichierSource = fopen(argSrc, "r");
    if (fichierSource == NULL) {
        printf("Ouverture impossible du fichier source,%s ", strerror(errno));
        exit(errno);
    }

    //ouvrir fichier destination en écriture
    fichierDest = fopen(argDest, "w");
    if (fichierDest == NULL) {
        printf("Erreur ouverture fichier destination %s ", strerror(errno));
        exit(errno);
    }
    //Copier les octets de l'en-tête et de la palette du fichier source dans le fichier destination.
    check = fread(&enTeteFic, sizeof (typeEnTeteFichierBmp), 1, fichierSource);
    if (check != 1) {
        printf("Erreur EnteteFichierBmp %s ", strerror(errno));
        exit(errno);
    }
    check = fread(&enTeteImg, sizeof (typeEnTeteImageBmp), 1, fichierSource);
    if (check != 1) {
        printf("Erreur EnteteImageBmp %s ", strerror(errno));
        exit(errno);
    }
    check = fread(palette, sizeof ( typeCouleur), NBCOULEURS, fichierSource);

    if (check != NBCOULEURS) {
        printf("Erreur Palette %s ", strerror(errno));
        exit(errno);
    }
    check = fwrite(&enTeteFic, sizeof (typeEnTeteFichierBmp), 1, fichierDest);
    if (check != 1) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }

    check = fwrite(&enTeteImg, sizeof (typeEnTeteImageBmp), 1, fichierDest);
    if (check != 1) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }

    check = fwrite(palette, sizeof (typeCouleur), NBCOULEURS, fichierDest);
    if (check != NBCOULEURS) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    //faire
    do {
        //repetition = lire 1 octet fichier source
        check = fread(&repetition, sizeof (char), 1, fichierSource);
        if (check != 1) {
            printf("%s\n", strerror(errno));
            exit(errno);
        }
        //valeurOctet = lire 1 octet fichier source
        check = fread(&valeurOctet, sizeof (char), 1, fichierSource);
        if (check != 1) {
            printf("%s\n", strerror(errno));
            exit(errno);
        }
        //pour nbOctet allant de 0 à  repetition
        for (nbOctet = 0; nbOctet < repetition; nbOctet++) {
            check = fwrite(&valeurOctet, sizeof (char), 1, fichierDest);
            if (check != 1) {
                printf("%s\n", strerror(errno));
                exit(errno);
            }
        }
        //finPour   
    } while (repetition != 00 || valeurOctet != 01);
    //tantQue repetition!=00 OU valeurOctet!=01

    //fermer fichier source
    check = fclose(fichierSource);

    if (check == EOF) {
        printf("%s", strerror(errno));
        exit(errno);
    }
    //modifier les valeurs des champs de l'en-tête de fichier du fichier dest
    //Modif de taille fichier
    check = fseek(fichierDest, 2, SEEK_SET);
    if (check == -1) {
        printf("%s", strerror(errno));
        exit(errno);
    }


    tailleFichier = sizeof (typeEnTeteFichierBmp) + sizeof (typeEnTeteImageBmp) + NBCOULEURS * sizeof (typeCouleur) + enTeteImg.largeur * enTeteImg.hauteur;
    tailleImage = enTeteImg.largeur * enTeteImg.hauteur;
    typeCompression = 0;
    check = fwrite(&tailleFichier, sizeof (unsigned int), 1, fichierDest);
    if (check != 1) {
        printf("probleme ecriture taille fichier%s\n", strerror(errno));
        exit(errno);
    }
    check = fseek(fichierDest, 2 + 4 + 4 + 4 + 4 + 4 + 4 + 2 + 2, SEEK_SET);
    if (check == -1) {
        printf("%s", strerror(errno));
        exit(errno);
    }
    check = fwrite(&typeCompression, sizeof (unsigned int), 1, fichierDest);
    if (check != 1) {
        printf("probleme ecriture taille fichier%s\n", strerror(errno));
        exit(errno);
    }
    check = fwrite(&tailleImage, sizeof (unsigned int), 1, fichierDest);
    if (check != 1) {
        printf("probleme ecriture taille fichier%s\n", strerror(errno));
        exit(errno);
    }

    //modifier les valeurs des champs de l'en-tête d'image du fichier dest



    //fermer fichier destination
    check = fclose(fichierDest);


    if (check == EOF) {
        printf("%s", strerror(errno));
        exit(errno);
    }


    /*
    Question 4 : taille du fichier, et la type de décompression et taille de l'image
    Question 5 : Taille de fichier a 2 / Type de compression a 2+4+4+4+4+4+4+2+2 / taille de l'image a 2+4+4+4+4+4+4+2+2+4
    Question 6 : taille entete fichier + entete image + palette + ( largeur * hauteur) / type de compression : 0 / taille de l'image : largeur * hauteur
     
     
     */
}
