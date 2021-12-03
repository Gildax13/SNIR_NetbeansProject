/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package TD2_Banque;

/**
 *
 * @author Adrien PEAN
 */
public class CompteBancaire {

    private double solde;
    private double decouvert;

    public CompteBancaire() {
        this.solde = 80; // Offre de départ
        this.decouvert = 100;
    }

    public CompteBancaire(double solde, double decouvert) {
        this.solde = solde;
        this.decouvert = decouvert;
    }

    public CompteBancaire(CompteBancaire Compte) {
        this.solde = Compte.solde;
        this.decouvert = Compte.decouvert;
    }

    public void retirerArgent(double sommeARetirer) {
        if (this.solde > this.decouvert) {
            this.solde = this.solde - sommeARetirer;
        } else {
            if(sommeARetirer<0){
                System.out.println("Mauvaise saisie ! ");
            }else{
                System.out.println("La somme  : " + sommeARetirer + " fait descendre votre Solde : "+this.solde+"  en dessous de votre Découvert de : " + this.decouvert);
            }
            
        }
    }

    public void ajouterArgent(double sommeAAjouter) {
        if(sommeAAjouter>0){
            this.solde = this.solde + sommeAAjouter;
            System.out.println("Votre nouveau solde : " + this.solde );
        }else{
            System.out.println("Mauvaise saisie ! ");
        }
        
    }

    public void afficherSolde() {
        System.out.println("Votre solde : " + this.solde);
    }
    
    public void modifierDecouvert(double nouveauDecouvert){
        this.decouvert=nouveauDecouvert;
        
        
        
    }
    

}
