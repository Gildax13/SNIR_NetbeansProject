/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: apean
 *
 * Created on 30 septembre 2020, 10:52
 */

#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>
#include <unistd.h>

/*
 * 
 */
int main(int argc, char** argv) {

    printf("hello");

    int colonne;
    int ligne;
    InitialiserLeds();


    while(1){
        for (ligne = 0; ligne <= 7; ligne++) {
            for (colonne = 0; colonne <= ligne; colonne++) {
                Allumer(ligne, colonne, ROUGE);
                Allumer(colonne, ligne, ROUGE);
            }
            usleep(100000);
            if (ligne != 7) {
                for (colonne = 0; colonne <= ligne - 1; colonne++) {
                    if (ligne != colonne) {
                        Allumer(ligne, colonne, NOIR);
                        Allumer(colonne, ligne, NOIR);
                    }
                }
            }
        }
        Effacer();
        
    }
    return (EXIT_SUCCESS);
}

