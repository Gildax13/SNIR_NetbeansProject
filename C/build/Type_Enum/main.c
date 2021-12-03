/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: apean
 *
 * Created on 3 décembre 2020, 10:00
 */

#include <stdio.h>
#include <stdlib.h>
#include "typeenum.h"
#include <string.h>

/*
 * 
 */
int main(int argc, char** argv) {
    char *nomJours[7]={"lundi","mardi","mercredi","jeudi","vendredi","samedi","dimanche"};
    jours aujourdhui=Jeudi;
    printf("%s\n",nomJours[aujourdhui]);
    printf("%s\n",nomJours[aujourdhui+2]);
    if(estUnPalindrome("coucou")){
        printf("\nCoucou est un palindrome");
    }
    else{
        printf("\nCoucou n'est pas un Palindrome");
    }
    
     if(estUnPalindrome("eluparcettecrapule")){
        printf("\neluparcettecrapule est un palindrome");
    }
     else{
        printf("\neluparcettecrapule n'est pas un Palindrome");
    }
    
    
    return 0;
    
    
    return (EXIT_SUCCESS);
}

