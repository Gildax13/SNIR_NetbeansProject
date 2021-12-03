/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package triangle;

import java.util.Scanner;

/**
 *
 * @author apean
 */
public class triangle {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Saisissez un nombre");
        int nb;
        nb = sc.nextInt();
        int i = 0, j = 0, n = 0;
        /*while(i < nb){
            i++;
            j=0;
            while(j != i){
                System.out.print("*");
                j++;
            }
            System.out.println();
            
   
        }
         */
 /*
        for(i=0;i<nb;i++){ 
            for(j=0; j<i;j++){
                System.out.print("*");                
            }
            System.out.println();
            
        }
         */
        for (i = 0; i < nb; i++) {
            for (j = 0; j < nb - i - 1; j++) {
                System.out.print(" ");
            }
            for (j = 0; j <= i * 2; j++) {
                System.out.print("*");
            }
            System.out.println();
        }

    }

}
