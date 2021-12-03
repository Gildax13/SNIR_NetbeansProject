/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.coursvoiture;

/**
 *
 * @author apean
 */
public class TestVoiture {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {

        Voiture Peugeot = new Voiture("Blanc", 200000);
        Voiture Renault = new Voiture("Noir", 12000);
        Voiture VoitureCassee = new Voiture();
        
        Peugeot.rouler(15);
        
        
        
        Peugeot.reculer(45);
        Peugeot.klaxonner();
        Renault.klaxonner();
        
        Renault.rouler(520);
        
        Renault.afficher();
        Peugeot.afficher();
        VoitureCassee.afficher();
        
    }
    
}
