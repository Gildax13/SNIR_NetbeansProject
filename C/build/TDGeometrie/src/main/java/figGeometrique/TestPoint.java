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
public class TestPoint {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Point p1 = new Point();
        Point p2 = new Point(0, 5);
        Point p3 = new Point(p2);
        
        
        p1.afficher();
        p2.afficher();
        p3.afficher();
        
        p2.translater(2, -2);
        
        p2.afficher();
        p3.afficher();
        
        
    }
    
}
