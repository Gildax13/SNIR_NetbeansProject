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
public class Barre {

    protected double longueur;
    protected double densite;
    protected String reference;

    public Barre(double longueur, double densite, String référence) {
        this.longueur = longueur;
        this.densite = densite;
        this.reference = référence;
    }

    public Barre() {
        this.longueur = 10;
        this.densite = 0;
        this.reference = "Original";
    }

    public Barre(Barre B) {
        this.longueur = B.longueur;
        this.densite = B.densite;
        this.reference = B.reference;
    }
    
    
    public void afficherInfos(){
        System.out.println("Longueur : "+ this.longueur);
        System.out.println("Densité : "+ this.densite);
        System.out.println("Référence : "+ this.reference);
    }
    
    
    

}
