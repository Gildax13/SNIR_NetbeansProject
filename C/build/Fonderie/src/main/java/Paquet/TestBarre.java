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
public class TestBarre {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        BarreRectangle Rectangle = new BarreRectangle(10, 2, 5, "rectangle");
        
        BarreRonde Ronde = new BarreRonde(5, 10, 2, "Cercle");
        BarreCarre Carre = new BarreCarre(5, 2, "Carre");
        
        Rectangle.afficherInfos();
        System.out.println("Section du rectangle : " + Rectangle.calculerSectionRectangle());
        System.out.println("Masse du rectangle : " + Rectangle.calculerMasseRectangle());
        Ronde.afficherInfos();
        System.out.println("Section du Cercle : " + Ronde.calculerSectionCercle());
        System.out.println("Masse du Cercle : " + Ronde.calculerMasseCercle());
        Carre.afficherInfos();
        System.out.println("Section du Carre : " + Carre.calculerSectionCarre());
        System.out.println("Masse du Carre : " + Carre.calculerMasseCarre());
     
    }
    
}
