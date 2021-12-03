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
public class Carre {
    //attributs
    private int longueurCote;
    

    //Constructeurs
    public Carre(int longueurCote) {
        this.longueurCote = longueurCote;
    }
    public Carre() {
    }
   
    //methodes

    public int calculPerimetre(){
        int perimetre;
        
        perimetre =longueurCote*4;
        return perimetre;
    }
    public int calculAire(){
        int aire;
        
        aire =longueurCote*longueurCote;
        return aire;
    }
    
    public void afficherPerimetre(){
        System.out.println("Perimetre : "+this.calculPerimetre());
    }
    public void afficherAire(){
        System.out.println("Aire : "+this.calculAire());
    }
    
    
}
