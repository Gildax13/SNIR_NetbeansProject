/* 
 * File:   main.c
 * Author: apean
 *
 * Created on 27 janvier 2021, 08:00
 */

#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"
#include <errno.h>
#include <string.h>


int main(int argc, char** argv) {

   // afficherSteganoTxt(CHEMIN1,49152);
    //extraireSteganoImg(CHEMIN2,999,"/tmp/test.bmp");
    
    cachePalette("YOP","/tmp/test.bmp","/home/USERS/ELEVES/SNIR2020/apean/Bureau/imgBMP/plasma.bmp");
    
    
    return (EXIT_SUCCESS);
}

