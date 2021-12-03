/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: apean
 *
 * Created on 4 janvier 2021, 15:44
 */

#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"

/*
 * 
 */
int main(int argc, char** argv) {
    typePersonne michel,*jean;
    
    
    michel = creePersonne();
    afficherPersonne(michel);
    jean=creePersonnePtr();
    affichePersonnePtr(jean);
    
    /*
    adherent *michel;
    
    michel = nouvelAdherentPtr();
    afficheAdherentPtr(michel);
    
    */
    
    
    
   return (EXIT_SUCCESS); 
}

