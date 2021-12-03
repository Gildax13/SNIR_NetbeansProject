/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package parking;

import java.util.Scanner;

/**
 *
 * @author apean
 */
public class parking {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a, b, c, d;
        int codeChoisi[];
        int compte=0;
        codeChoisi = new int[4];
        codeChoisi[0]= 1;
        codeChoisi[1]= 2;
        codeChoisi[2]= 3;
        codeChoisi[3]= 4;
       
       
        do{
        System.out.println("Saisissez 4 chiffre du code");
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();
        d = sc.nextInt();
        
        if(a != codeChoisi[0] || b != codeChoisi[1] || c != codeChoisi[2] || d != codeChoisi[3]){
            System.out.println("Vous vous etes trompé");
            compte++;
        }else{
            System.out.println("Vous avez reussi");
        }
        
        //System.out.println(a +""+ b +""+ c+""+  d); 
        }while(compte!=3);
        System.out.println("Retentez votre chance une prochaine fois ... Police is coming BIP BIP BIP");
        
        
    }
    
}
