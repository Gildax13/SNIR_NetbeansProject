/* 
 * File:   fonctions.h
 * Author: apean
 *
 * Created on 27 janvier 2021, 08:00
 */


#ifndef FONCTIONS_H
#define FONCTIONS_H

#ifdef __cplusplus
extern "C" {
#endif
#define CHEMIN1 "/home/USERS/ELEVES/SNIR2020/imgBMP/plasmaSteganoTexte.bmp"
#define CHEMIN2 "/home/USERS/ELEVES/SNIR2020/apean/Bureau/imgBMP/mandelSteganoImg.bmp"    
#pragma pack(push, 1)
    
    typedef struct
{
    unsigned char signature[2];
    unsigned int tailleFichier;
    unsigned int reserve;
    unsigned int adresseImg;

} typeEnTeteFichierBmp; 

typedef struct
{
    unsigned int tailleEnTete;
    unsigned int largeur;
    unsigned int hauteur;
    unsigned short int nbPlan;
    unsigned short int bitParPixel;
    unsigned int typeCompression;
    unsigned int tailleImage;
    unsigned int resolutionHorizontale;
    unsigned int resolutionVerticale;
    unsigned int nbCouleursUtilises;
    unsigned int nbCouleursImportantes;
} typeEnTeteImageBmp;

typedef struct
{
    unsigned char bleu;
    unsigned char vert;
    unsigned char rouge;
    unsigned char alpha; // reserve
}typeCouleur;
void afficherSteganoTxt(char nom[255],int pas);
void cachePalette(char messageCacher[200], char fichierDST[200], char fichierSRC[200]);

#ifdef __cplusplus
}
#endif

#endif /* FONCTIONS_H */

