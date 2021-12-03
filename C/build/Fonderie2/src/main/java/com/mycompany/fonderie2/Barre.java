/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.fonderie2;

/**
 *
 * @author Adrien PEAN
 */
public class Barre {

    protected String reference;
    protected double densite;
    protected double longueur;


    /**
     * 
     * 
     * @param b La barre de LEGO à copier
     */
    public Barre(Barre b) {
        this.reference = b.reference;
        this.densite = b.densite;
        this.longueur = b.longueur;
    }

    /**
     *
     * @param reference Nom de la piece de LEGO
     * @param densite La densité de l'alliage
     * @param longueur La longueure de la barre
     */
    public Barre(String reference, double densite, double longueur) {
        this.reference = reference;
        this.densite = densite;
        this.longueur = longueur;
    }

    /**
     * Affiche la référence de la barre de LEGO
     *
     */
    public void afficherReference() {

        System.out.println("Reférence de la pièce : " + this.reference);
    }

}
