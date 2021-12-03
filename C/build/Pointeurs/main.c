/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: apean
 *
 * Created on 26 novembre 2020, 09:19
 */

#include <stdio.h>
#include <stdlib.h>

#include "fonctionsPointeur.h"

/*
 * 
 */
int main(int argc, char** argv)
{
    char *ptrCar;
    int *ptrEntier;
    float *ptrReel;
    char chaine[] = "12345678000A";
    int i;
    ptrCar = chaine;
    ptrEntier = (int *) chaine;
    ptrReel = (float *) chaine;
    for (i = 0; i < 3; i++)
    {
        printf("ptrCar    = %p       *ptrCar    = %c\n", ptrCar, *ptrCar);
        printf("ptrEntier = %p       *ptrEntier = %d\n", ptrEntier, *ptrEntier);
        printf("ptrReel   = %p       *ptrReel   = %f\n", ptrReel, *ptrReel);
        ptrCar++;
        ptrEntier++;
        ptrReel++;
        printf("\n");
    }
    return (EXIT_SUCCESS);

}

