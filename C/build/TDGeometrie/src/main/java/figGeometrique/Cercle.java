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
public class Cercle {
  private double diametre;
  private String id;

    public Cercle() {
        diametre=0.0;
        id="origin";
    }

    public Cercle(double diametre, String id) {
        this.diametre = diametre;
        this.id = id;
    }
  
  public double calculerAire(){
      return(Math.PI*diametre*diametre/4);
  }
     public double calculerPerimetre(){
      return(Math.PI*diametre);
  }
    
    
    
}
