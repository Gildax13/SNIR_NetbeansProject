/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pack.jhms;

import java.util.Scanner;

/**
 *
 * @author apean
 */
public class Jhms {

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        int nbDon;
        int sec;
        int min = 0;
        int heure = 0;
        int jour = 0;
        
        System.out.println("Donnez nous le nombre de seconde que vous voulez transformer");
        nbDon = sc.nextInt();
        sec = nbDon;
        do{
           
           if(sec>60){
             sec = sec - 60;
             min = min + 1;
           }
           if(min>60){
             min = min - 60;
             heure = heure + 1;
           }
            if(heure>24){
             heure = heure - 24;
             jour = jour +1 ;
             
           }
  
        }while(sec>60);
        
        
        System.out.println("Jours : " + jour + " Heures : " + heure + " Minutes : "+ min + " Secondes : " + sec);
        
        
        
        
    }
    
}
