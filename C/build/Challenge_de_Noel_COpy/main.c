/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: dbernard
 *
 * Created on 7 décembre 2020, 15:20
 * Exemple d'utilisation des ncurses
 * déplacement d'une flamme dans une fenetre à l'aide des touches '8' '4' '6' '2'
 * 'x' pour quitter l'application
 */


#include "fonctions.h"

/*
 * 
 */
int main(int argc, char** argv) {

    typeElement rond, croix;
    int touche;
    WINDOW *boite;
    int J = 1;
    char grille[3][3];
    int x, y, i, j;
    bool coupValide = FALSE;
    int coup=0;
    
    init_pair(1, COLOR_BLUE, COLOR_BLACK);
    init_pair(2, COLOR_RED, COLOR_BLACK);

    for (x = 0; x < 3; x++) {
        for (y = 0; y < 3; y++) {
            grille[x][y] = ' ';
        }
    }
    
    char jouer;
    
    printf("%s||||||||  ||    ||||   %s|||||||||  ||||||||    ||||  %s||||||||||   |||||    ||||||\n",RED,BLUE,GREEN);
    printf("%s   ||          ||     %s    ||      ||    ||   ||     %s    ||      ||   ||   ||\n",RED,BLUE,GREEN);
    printf("%s   ||     ||  ||      %s    ||      ||    ||  ||      %s    ||     ||     ||  || \n",RED,BLUE,GREEN);
    printf("%s   ||     ||  ||      %s    ||      ||    ||  ||      %s    ||     ||     ||  ||||\n",RED,BLUE,GREEN);
    printf("%s   ||     ||  ||      %s    ||      ||||||||  ||      %s    ||     ||     ||  ||\n",RED,BLUE,GREEN);
    printf("%s   ||     ||   ||     %s    ||      ||    ||   ||     %s    ||      ||   ||   || \n",RED,BLUE,GREEN);
    printf("%s   ||     ||    ||||  %s    ||      ||    ||    ||||  %s    ||       |||||    ||||||\n%s",RED,BLUE,GREEN,GREY);
    
    
    
    
    
    printf("\n%sBienvenue dans le %sTIC %sTAC %sTOE ! %s\n",GREY,RED,BLUE,GREEN,GREY);
    printf("Souhaitez vous jouez ? (o/n)");
    scanf("%c",&jouer);
    if(jouer=='o'){
    setlocale(LC_ALL, ""); // mettre la console en compatibilité d'affichage unicode sous linux
    initscr(); // Initialise la structure WINDOW et autres paramètres 
    boite = subwin(stdscr, HAUTEUR, LARGEUR, 1, 1); // boite positionnee en 1,1 avec comme dimension LARGEURxHAUTEUR
    box(boite, ACS_VLINE, ACS_HLINE); // dessiner le contour de la boite  
    mvprintw(0, 10, "Tic Tac Toe");
        mvhline(6, 2, '_', 29);
        mvhline(11, 2, '_', 29);
        mvvline(2, 11, '|', 15);
        mvvline(2, 21, '|', 15);
        rond.symbole = 0x1F535;
        croix.symbole = 0x274C;
        curs_set(0); //curseur invisible
        noecho(); // pas d'echo de la touche appuyée
    do { 
        // Affichage de quel joueur joue
        if (J == 1) {
            mvprintw(3, 35, "Joueur 1 joue ! (Rond bleu)   "); 

        } else {
            if (J == -1) {
                mvprintw(3, 35, "Joueur 2 joue ! (Croix rouge)");
            }
        }
        touche = getch(); // recupérer la valeur de la touche appuyée
        wrefresh(boite);
//Cas selon les touches appuyer du pavés numériques.
        switch (touche) {
            case '7':
                if (grille[0][0] == ' ') {
                    coupValide = TRUE;
                    if (J == 1) {
                        placerSymbole(5, 3, rond, boite);
                        grille[0][0] = 'o';
                        coup++;
                    } else { //Joueur 2
                        placerSymbole(5, 3, croix, boite);
                        grille[0][0] = 'x';
                        coup++;
                    }
                } else {
                    mvprintw(6, 35, "Case déja exploitée !");
                    coupValide = FALSE;
                }
                break;
            case '8':
                if (grille[0][1] == ' ') {
                    coupValide = TRUE;
                    if (J == 1) {
                        placerSymbole(15, 3, rond, boite);
                        grille[0][1] = 'o';
                        coup++;
                    } else { //Joueur 2
                        if (J == -1) {
                            placerSymbole(15, 3, croix, boite);
                            grille[0][1] = 'x';
                            coup++;
                        }
                    }
                } else {
                    mvprintw(6, 35, "Case déja exploitée !");
                    coupValide = FALSE;
                }
                break;
            case '9':
                if (grille[0][2] == ' ') {
                    coupValide = TRUE;
                    if (J == 1) {
                        placerSymbole(25, 3, rond, boite);
                        grille[0][2] = 'o';
                        coup++;
                    } else { //Joueur 2
                        if (J == -1) {
                            placerSymbole(25, 3, croix, boite);
                            grille[0][2] = 'x';
                            coup++;
                        }
                    }
                } else {
                    mvprintw(6, 35, "Case déja exploitée !");
                    coupValide = FALSE;
                }
                break;
            case '4':
                if (grille[1][0] == ' ') {
                    coupValide = TRUE;
                    if (J == 1) {
                        placerSymbole(5, 8, rond, boite);
                        grille[1][0] = 'o';
                        coup++;
                    } else { //Joueur 2
                        if (J == -1) {
                            placerSymbole(5, 8, croix, boite);
                            grille[1][0] = 'x';
                            coup++;
                        }
                    }
                } else {
                    mvprintw(6, 35, "Case déja exploitée !");
                    coupValide = FALSE;
                }
                break;
            case '5':
                if (grille[1][1] == ' ') {
                    coupValide = TRUE;
                    if (J == 1) {
                        placerSymbole(15, 8, rond, boite);
                        grille[1][1] = 'o';
                        coup++;
                    } else { //Joueur 2
                        if (J == -1) {
                            placerSymbole(15, 8, croix, boite);
                            grille[1][1] = 'x';
                            coup++;
                        }
                    }
                } else {
                    mvprintw(6, 35, "Case déja exploitée !");
                    coupValide = FALSE;
                }
                break;
            case '6':
                if (grille[1][2] == ' ') {
                    coupValide = TRUE;
                    if (J == 1) {
                        placerSymbole(25, 8, rond, boite);
                        grille[1][2] = 'o';
                        coup++;
                    } else { //Joueur 2
                        if (J == -1) {
                            placerSymbole(25, 8, croix, boite);
                            grille[1][2] = 'x';
                            coup++;
                        }
                    }
                } else {
                    mvprintw(6, 35, "Case déja exploitée !");
                    coupValide = FALSE;
                }
                break;
            case '1':
                if (grille[2][0] == ' ') {
                    coupValide = TRUE;
                    if (J == 1) {
                        placerSymbole(5, 13, rond, boite);
                        grille[2][0] = 'o';
                        coup++;
                    } else { //Joueur 2
                        if (J == -1) {
                            placerSymbole(5, 13, croix, boite);
                            grille[2][0] = 'x';
                            coup++;
                        }
                    }
                } else {
                    mvprintw(6, 35, "Case déja exploitée !");
                    coupValide = FALSE;
                }
                break;
            case '2':
                if (grille[2][1] == ' ') {
                    coupValide = TRUE;
                    if (J == 1) {
                        placerSymbole(15, 13, rond, boite);
                        grille[2][1] = 'o';
                        coup++;
                    } else { //Joueur 2
                        if (J == -1) {
                            placerSymbole(15, 13, croix, boite);
                            grille[2][1] = 'x';
                            coup++;
                        }
                    }
                } else {
                    mvprintw(6, 35, "Case déja exploitée !");
                    coupValide = FALSE;
                }
                break;
            case '3':
                if (grille[2][2] == ' ') {
                    coupValide = TRUE;
                    if (J == 1) {
                        placerSymbole(25, 13, rond, boite);
                        grille[2][2] = 'o';
                        coup++;
                    } else { //Joueur 2
                        if (J == -1) {
                            placerSymbole(25, 13, croix, boite);
                            grille[2][2] = 'x';
                        coup++;
                        }
                    }
                } else {
                    mvprintw(6, 35, "Case déja exploitée !");
                    coupValide = FALSE;
                }
                break;
        }
        refresh(); // mise a jour de l'affichage
        wrefresh(boite);
        if (coupValide == TRUE) {
            J = J*-1;
        }
        
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
       //-------------------------------------Detection de victoire Lineaire Horizontale------------------------------------
                if (grille[0][0] == 'o' && grille[0][1] == 'o' && grille[0][2] == 'o') {
                    victoire(1);
                } else {
                    if (grille[0][0] == 'x' && grille[0][1] == 'x' && grille[0][2] == 'x') {
                        victoire(2);
                    } else {
                        if (grille[1][0] == 'o' && grille[1][1] == 'o' && grille[1][2] == 'o') {
                            victoire(1);
                        } else {
                            if (grille[1][0] == 'x' && grille[1][1] == 'x' && grille[1][2] == 'x') {
                                victoire(2);
                            } else {
                                if (grille[2][0] == 'o' && grille[2][1] == 'o' && grille[2][2] == 'o') {
                                    victoire(1);
                                } else {
                                    if (grille[2][0] == 'x' && grille[2][1] == 'x' && grille[2][2] == 'x') {
                                        victoire(2);
                                    } else {
       //------------------------------------------Detection nde victoire Lineaire Verticale-------------------------------------
                                        if (grille[0][0] == 'o' && grille[1][0] == 'o' && grille[2][0] == 'o') {
                                            victoire(1);
                                        } else {
                                            if (grille[0][0] == 'x' && grille[1][0] == 'x' && grille[2][0] == 'x') {
                                                victoire(2);
                                            } else {
                                                if (grille[0][1] == 'o' && grille[1][1] == 'o' && grille[2][1] == 'o') {
                                                    victoire(1);
                                                } else {
                                                    if (grille[0][1] == 'x' && grille[1][1] == 'x' && grille[2][1] == 'x') {
                                                        victoire(2);
                                                    } else {
                                                        if (grille[0][2] == 'o' && grille[1][2] == 'o' && grille[2][2] == 'o') {
                                                            victoire(1);
                                                        } else {
                                                            if (grille[0][2] == 'x' && grille[1][2] == 'x' && grille[2][2] == 'x') {
                                                                victoire(2);
                                                            } else {
       //-------------------------------------------Detection nde victoire en diagonale-----------------------------------------------------
                                                                if (grille[0][0] == 'o' && grille[1][1] == 'o' && grille[2][2] == 'o') {
                                                                    victoire(1);
                                                                } else {
                                                                    if (grille[0][0] == 'x' && grille[1][1] == 'x' && grille[2][2] == 'x') {
                                                                        victoire(2);
                                                                    } else {
                                                                        if (grille[0][2] == 'o' && grille[1][1] == 'o' && grille[2][0] == 'o') {
                                                                            victoire(1);
                                                                        } else {
                                                                            if (grille[0][2] == 'x' && grille[1][1] == 'x' && grille[2][0] == 'x') {
                                                                                victoire(2);
                                                                            } else{
                                                                                if(coup==9){
                                                                                    egalite();
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }


    
    } while (touche != 'x');

    endwin(); // remettre le terminal dans son état initial
    printf("\nBonne journée  !\n\n");
    printf("\n\n\n\n");
    printf("© La Vic'Team - Challenge de %sNoel %s2020 %s- Tous droits réservés\n\n\n",RED,GREEN,GREY);
    for (int i = 0; i <= 2; i++) {
        printf("%c", grille[0][i]);
    }
    printf("\n");
    for (int i = 0; i <= 2; i++) {
        printf("%c", grille[1][i]);
    }
    printf("\n");
    for (int i = 0; i <= 2; i++) {
        printf("%c", grille[2][i]);
    }
    
    printf("\n");
    }else{
        printf("\nBonne journée alors !\n\n\n");
        printf("\n\n\n\n");
        printf("© La Vic'Team - Challenge de %sNoel %s2020 %s- Tous droits réservés\n\n\n",RED,GREEN,GREY);
    }

    return (EXIT_SUCCESS);
}


