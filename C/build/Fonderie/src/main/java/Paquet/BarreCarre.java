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
public class BarreCarre extends Barre {
 /**
     * 
     * 
     * @param longueur longueur de la barre
     * @param densite  densite de la barre
     * @param reference reference de la barre
     */
    public BarreCarre(double longueur, double densite, String reference) {
        super(longueur, densite, reference);

    }
/**
 * 
 * @param B Un autre type BarreCarre pour copier celui-ci
 */
    public BarreCarre(BarreCarre B) {
        B.densite = this.densite;
        B.reference = this.reference;
        B.longueur = this.longueur;
    }
/**
 * 
 * @return resultat = la section du carre
 */
    public double calculerSectionCarre() {
        double resultat;
        resultat = this.longueur * this.longueur;
        return resultat;
    }
/**
 * 
 * @return resultat = Masse de la barre en forme de carre
 */
    public double calculerMasseCarre() {
        double resultat;

        resultat = this.longueur * this.densite * calculerSectionCarre();

        return resultat;
    }
}
