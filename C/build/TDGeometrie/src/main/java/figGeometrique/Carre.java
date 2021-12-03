/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package figGeometrique;

/**
 *
 * @author Adrien PEAN
 */
public class Carre {
    //ATTRIBUTS
    private int longueurDuCote;

    //CONSTRUCTEUR (ALT+Inser)
    public Carre() {
    }

    public Carre(int longueurDuCote) {
        this.longueurDuCote = longueurDuCote;
    }

    public int calculerPerimetre(){
        int peri;
        peri=longueurDuCote*4;
        return peri;
    }

    public int calculerAire(){
        int aire;
        aire=longueurDuCote*longueurDuCote;
        return aire;
    }
    public void afficher(){
        System.out.println("Perimètre du carré : "+calculerPerimetre());
        System.out.println("Aire du carré : "+calculerAire());
    }

}
