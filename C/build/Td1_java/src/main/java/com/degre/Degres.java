/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.degre;

import java.util.Scanner;

/**
 *
 * @author apean
 */
public class Degres {


   
    public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    
    double temperatureF,temperatureC;
        System.out.println("Saisissez une température en Farenheit");
        temperatureF = sc.nextDouble();
        
        temperatureC = (5.0/9.0)*(temperatureF-32);
        
        System.out.println("Temperature en Farenheit = " + temperatureF +" F et votre temperature en degre Celsius = " + temperatureC);
        
        
    
    
    
    
        
        
    }
    
}
