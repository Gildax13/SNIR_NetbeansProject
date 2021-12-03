#include "fonctions.h"

void placerSymbole(int x,int y,typeElement symbole,WINDOW *boite){
    symbole.x = x;
    symbole.y = y;
    mvwprintw(boite, symbole.y, symbole.x, "%lc", symbole.symbole);
    wrefresh(boite);
    mvprintw(6, 35, "                              ");
}

void victoire(int joueur){
    mvprintw(8, 34, "Victoire du Joueur %d    !",joueur);
    mvprintw(10, 34, "Touche x pour quitter puis relancer le jeu   !");
}
void egalite(){
    mvprintw(8, 34, "Egalité des deux joueurs   ");
    mvprintw(10, 34, "Touche x pour quitter puis relancer le jeu   !");
}

    
    
    
