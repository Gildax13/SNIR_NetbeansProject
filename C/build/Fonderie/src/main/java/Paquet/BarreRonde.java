/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Paquet;

/**
 *
 * @author Adrien PEAN
 */
public class BarreRonde extends Barre {

    double rayon;

    /**
     * 
     * @param rayon Rayon du cercle
     * @param longueur longueur de la barre
     * @param densite  densite de la barre
     * @param reference reference de la barre
     */
    public BarreRonde(double rayon, double longueur, double densite, String reference) {
        super(longueur, densite, reference);
        this.rayon = rayon;
    }
/**
 * 
 * @param B Un autre type BarreRonde pour copier celui-ci
 */
    public BarreRonde(BarreRonde B) {
        B.densite = this.densite;
        B.reference = this.reference;
        B.longueur = this.longueur;
    }
/**
 * 
 * @return resultat = la section du cercle
 */
    public double calculerSectionCercle() {
        double resultat;
        resultat = Math.PI * this.rayon * this.rayon;
        return resultat;
    }
/**
 * 
 * @return resultat = Masse de la barre en forme de Cercle
 */
    public double calculerMasseCercle() {
        double resultat;

        resultat = this.longueur * this.densite * calculerSectionCercle();

        return resultat;
    }
}
