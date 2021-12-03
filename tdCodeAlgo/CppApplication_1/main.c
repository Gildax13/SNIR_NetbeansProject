/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: apean
 *
 * Created on 30 septembre 2020, 08:07
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int l = 1;
    int c = 1;
    int pos;
    int max = 0;
    int taille;
    int changementligne = 0;
    int i = 1;

    printf("Quelle sera la longueur de la première ligne ? ");
    scanf("%d", &max);
    taille = max*max;
    for (i; i <= taille; i++) {

        if (c > max) {
            printf("\n");
            l++;
            c = 1;
        }
        pos = l + c;
        c++;
        if (pos <= max + 1) {
            printf("%d ", i);
        } else {
            printf("0");
        }





    }


    return (EXIT_SUCCESS);

}





