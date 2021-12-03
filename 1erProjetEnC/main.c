/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor. 
 * File:   main.c
 * Author: apean
 * Created on 10 septembre 2020, 11:52
 */

#include <stdio.h>
#include <stdlib.h>


/* 
 */


int main(int argc, char** argv) {

    int val1;
    int val2;
    
    int result;
    
    printf("Donner votre première valeur : ");
    scanf("%i",&val1);
    printf("Donner votre seconde valeur : ");
    scanf("%i",&val2);
    
    result=val1+val2;
    
    
    printf("Voici le resultat : %i", result );
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return (EXIT_SUCCESS);
}

