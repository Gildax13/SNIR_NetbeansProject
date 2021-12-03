#ifndef FONCTIONS_H
#define FONCTIONS_H

#include <wchar.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <wchar.h>
#include <wctype.h>
#include <locale.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif
#define LARGEUR 32
#define HAUTEUR 17
    
    
#define BLACK    "\033[1;30m"
#define RED      "\033[1;31m"
#define GREEN    "\033[1;32m"
#define YELLOW   "\033[1;33m"
#define BLUE     "\033[1;34m"
#define PURPLE   "\033[1;35m"
#define CYAN     "\033[1;36m"
#define GREY     "\033[1;37m"


    

    typedef struct{
        int x;
        int y;
        wchar_t symbole;
    }typeElement;
  
   
   
    void placerSymbole(int x,int y,typeElement symbole,WINDOW *boite);
    void victoire(int joueur);
    void egalite();
  

#ifdef __cplusplus
}
#endif

#endif /* FONCTIONS_H */
