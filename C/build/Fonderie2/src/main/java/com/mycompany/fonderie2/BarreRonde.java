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
public class BarreRonde extends Barre {

    private double rayon;

    /**
     *
     *
     * @param rayon Rayon de la barre
     * @param reference Nom de la piece de LEGO
     * @param densite La densité de l'alliage
     * @param longueur La longueure de la barre
     */

    public BarreRonde(double rayon, String reference, double densite, double longueur) {
        super(reference, densite, longueur);
        this.rayon = rayon;
    }

    /**
     *
     *
     * @return Retourne la masse calcule
     */
    public double calculerMasse() {

        return (this.longueur * this.densite * ((this.rayon * this.rayon) * Math.PI));
    }

}

