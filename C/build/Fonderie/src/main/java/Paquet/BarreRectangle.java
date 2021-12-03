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
public class BarreRectangle extends Barre {

    private double largeur;
    /**
     * 
     * @param largeur largeur de la barre
     * @param longueur longueur de la barre
     * @param densite  densite de la barre
     * @param reference reference de la barre
     */
    public BarreRectangle(double longueur, double largeur, double densite, String reference) {
        super(longueur, densite, reference);
        this.largeur = largeur;
    }
/**
 * 
 * @param B Un autre type BarreRectangle pour copier celui-ci
 */
    public BarreRectangle(BarreRectangle B) {
        B.densite = this.densite;
        B.largeur = this.largeur;
        B.reference = this.reference;
        B.longueur = this.longueur;
    }
/**
 * 
 * @return resultat = la section du Rectangle
 */
    public double calculerSectionRectangle() {
        double resultat;
        resultat = this.largeur * this.longueur;
        return resultat;
    }
/**
 * 
 * @return resultat = Masse de la barre en forme de Rectangle
 */
    public double calculerMasseRectangle() {
        double resultat;

        resultat = this.longueur * this.densite * calculerSectionRectangle();

        return resultat;
    }

}
