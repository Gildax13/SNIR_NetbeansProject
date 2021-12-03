/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *moisNom(int numMois){
    char* mois=NULL;
    char *tabMois[12]={"Janvier",
    "Fevrier","Mars","Avril","Mai","Juin",
    "Juillet","Aout","Septembre","octobre",
    "Novembre","Decembre"};
    
    if(numMois>=1 && numMois<=12){
        mois=(char *)malloc(strlen(tabMois[numMois-1])+1);
        strcpy(mois,tabMois[numMois-1]);
    }

    
    
    
    return mois;
    
}