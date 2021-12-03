/* 
 * File:   mesFonctions.h
 * Author: apean
 * Description : Bibliotheque de Fonctions perso
 * Created on 8 octobre 2020, 10:46
 */

#ifndef MESFONCTIONS_H
#define MESFONCTIONS_H

#ifdef __cplusplus
extern "C" {
#endif
    
#define LARGEUR 15
#define HAUTEUR 9

    void afficherMenu(char sexe);
    void Ecrire(char chaine);
    float additionReels(float val1, float val2);
    void afficherCarre(int val);
    int calculerCarre(int val);
    float calculerDiscriminant(float a, float b, float c);
    void afficherDelta(float a,float b, float c);
    void afficherRacines(float a,float b, float c);
    void afficherLigne(int nb);
    void afficherUnCarre(int nb);
    void afficherUnRectangle(int L, int l);
    int compterSymboles(char text[],char caractere);
    int verifTerminaison(char *chaine,char fin[2]);
    int nbCroix(unsigned char grille[LARGEUR][HAUTEUR]);
    void initGrille(unsigned char grille[LARGEUR][HAUTEUR]);
    void afficherGrille(unsigned char grille[LARGEUR][HAUTEUR]);



#ifdef __cplusplus
}
#endif

#endif /* MESFONCTIONS_H */

