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
public class Voiture {
    //Attributs
    private String couleur;
    private int nbKilometres;
    
    //methodes

    public Voiture(String couleur, int nbKilometres) {
        this.couleur = couleur;
        this.nbKilometres = nbKilometres;
    }
    public Voiture(){
        this.couleur = "pas couleur";
        this.nbKilometres=0;
    }
    
    void rouler(int distance){
        nbKilometres+=distance;
    }
    void reculer(int distance){
        nbKilometres+=distance;
    }
    void klaxonner(){
        System.out.println("POUET POUET");
    }
    
    void afficher(){
        System.out.println("Couleur : " + couleur);
        System.out.println("Nombre de kilometres : " + nbKilometres);
    }
    
    
  
}
