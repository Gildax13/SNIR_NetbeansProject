/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package figGeometrique;

/**
 *
 * @author apean
 */
public class Point {
    //Attributs
    private double x;
    private double y;
//constructeur
    public Point() { //Constructeur sans parametres
    }

    public Point(double x, double y) {
        this.x = x;
        this.y = y;
    }
    
    public Point(Point p){
        this.x = p.x;
        this.y = p.y;
    }
    
    
    //Methodes
    
    public void translater(double dx,double dy){
        this.x+=dx;
        this.y+=dy;
    } 
    
    public void afficher(){
       System.out.println("X : " + this.x + " Y = " + this.y);
    } 
    
    
    public double calculerDistance(){
        
        double distance;
        
        distance = Math.sqrt(this.x*this.x+this.y*this.y);
        return distance;
        
        
    }
    public double calculerDistancePoint(Point p){
        
        double distance;
        distance = Math.sqrt((p.x*this.x)*(p.x*this.x) + (p.y*this.y)*(p.y*this.y));
        
        return distance;
        
        
    }
    
    
    
}
