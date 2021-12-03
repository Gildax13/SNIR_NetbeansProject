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
public class TestBanque {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        CompteBancaire CB1 = new CompteBancaire(1000.0, 100.0);
        CompteBancaire CB2 = new CompteBancaire();
        CompteBancaire CB3 = new CompteBancaire(CB1);
        
        CB1.afficherSolde();
        CB2.afficherSolde();
        CB3.afficherSolde();
        
        CB1.retirerArgent(999);
        CB1.afficherSolde();
        CB1.retirerArgent(102);
        CB1.afficherSolde();
        CB1.modifierDecouvert(200);
        CB1.retirerArgent(304);
        CB1.retirerArgent(-304);
                
        
        
        
        
        
        
        
    }
    
}
