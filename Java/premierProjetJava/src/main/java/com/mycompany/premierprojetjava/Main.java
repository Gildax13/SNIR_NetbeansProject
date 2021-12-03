/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.premierprojetjava;

import java.util.Scanner;

/**
 *
 * @author apean
 */
public class Main {

    public static void ecrire(String texte) {

        System.out.println(texte);
    }

    public static void main(String[] args) {
       int multiplicateur;
       Scanner sc = new Scanner(System.in);
       ecrire("Donnez le multiplicateur");
       multiplicateur= sc.nextInt();
       
        for (int i = 0; i <= 10; i++) {
            ecrire( multiplicateur +" x " + i + " = " + (multiplicateur*i));
        }
        
//ecrire("Hello World, it's me ! ");
        
        
    }
}
