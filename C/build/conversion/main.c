/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: apean
 *
 * Created on 18 janvier 2021, 17:05
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */



void affiche_binaire(unsigned int n){
    unsigned int masque = 0;
    masque = -masque;
    masque = masque >> 1;
    masque = -masque;
}
int main(int argc, char** argv) {
    affiche_binaire(1);
    return (EXIT_SUCCESS);
}

