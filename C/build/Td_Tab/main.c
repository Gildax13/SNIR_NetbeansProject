/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: apean
 *
 * Created on 10 novembre 2020, 13:11
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NBELEVES 20
#define NBMAXCAR 250

/*
 * 
 */
int main(int argc, char** argv) {
    /*int tabnotes[NBELEVES];
    int i;
    int notes;
   
    
    
    for (i = 0;i<NBELEVES;i++){
         do{
        printf("Saisissez la note de l'eleve n° %d : ",i+1);
        scanf("%d",&notes);
        tabnotes[i]=notes; 
        }while(notes<0 || notes>20);  
    }
    
    for (i= 0;i<NBELEVES;i++){
        printf("L'élève numéro %d a eu la note %d / 20\n",i+1,tabnotes[i]);
        
    }
     */
    /*
        int compterSymboles(char text[], char caractere) {
        int i;
        int taille = strlen(text);
        int nbcaractere = 0;
        for (i = 0; i < taille; i++) {
            if (text[i] == caractere) {
                nbcaractere++;
            }
        }

        return nbcaractere;

    }
    
    
        char tab[100];
         char chara;
         int nb;
    
         printf("Saisir votre chaine de caractère puis votre caractère\n");
         scanf("%s", tab);
         scanf(" %c",&chara);
    
         nb = compterSymboles(tab,chara);    
    
         printf("Nombre de caractère %c = %d\n",chara,nb);
    
     */

    /*
    char tab[100];
    printf("Saisir votre chaine de caractère\n");
    gets(tab);
    int taille = strlen(tab);
    int compte = 0;
    for (int i = 0; i < taille; i++) {
        if (tab[i] == ' ' && tab[i + 1] != ' ') {
            compte++;
        }
    }
    printf("Il y a %d mots", compte);
     
    char tab[100];
    int i;
    int taille = 0;
    printf("Saisir votre chaine de caractère\n");
    gets(tab);
    taille = strlen(tab);
    
    for (i = taille; i >= 0; i--) {
        printf("%c", tab[i]);
    }
     
    char tab[100];
    int taille;

    int i;
    printf("rentrer une chaine \n");
    gets(tab);
    taille = strlen(tab);
    for (i = 0; i < taille; i++) {
        if (tab[i] >= 'A' && tab[i] <= 'Z') {
            tab[i] = tab[i] + ('a' - 'A');
        } else {
            if (tab[i] >= 'a' && tab[i] <= 'z') {
                tab[i] = tab[i] - ('a' - 'A');
            }
        }
    }
    printf(" %s",tab);


#define TAILLETAB 100
#define COLMAX 6
#define LIGMAX 36    
    
    char tab[TAILLETAB];
    char tabMorse[LIGMAX][COLMAX]={
    "._",//A
    "-...",//B
    "-.-.",//C
    "-..",//D
    ".",//E
    "..--",//F
    "--.",//G
    "....",//H
    "..",//I
    ".---",//J
    "-.-",//K
    ".-..",//L
    "--",//M
    "-.",//N
    "---",//O
    ".--.",//P
    "--.-",//Q
    ".-.",//R
    "...",//S
    "-", //T
    "..-", //U
    "..-", //V
    ".--", //W
    "-..-", //X
    "-.--", //Y
    "--..", //Z
    ".----", //1
    "..---",//2
    "...--", //3
    "....-", //4
    ".....", //5
    "-....", //6
    "--...", //7
    "---..", //8
    "----.", //9
    "-----"};//0
    
    int i;
    int b;
    printf("Saisir Chaine de caractere : ");
    gets(tab);
    
    
      for (i = 0; i < strlen(tab); i++) {

          if (tab[i] >= 65 && tab[i] <= 90) {
              b = tab[i] - 65;
              printf("%s ", tabMorse[b]);
          } else
              if (tab[i] >= 48 && tab[i] <= 57) {
              b = tab[i] - 22;
              printf("%s ", tabMorse[b]);

          }
      }  
          
    
    char tab[100];
    char tabDeux[6];
    
    int i;
    
    printf("Saisissez votre chaîne de caractères : ");
    gets(tab);
    
    for(i=0;i<5;i++){
       tabDeux[i]=tab[i];  
    }
    
   
    if(strcmp(tabDeux,"salut")==0){
        printf("bon début");
    }else{
        printf("mauvais début");
    }
    
    
    
#define LOGIN "michel"
#define MDP "123456789"
    
    char login[15];
    char mdp[15];
    
    printf("Saisissez votre Login puis votre Mot de passe\n");
    printf("Login : ");
    gets(login);
    printf("Mot de passe : ");
    gets(mdp);
    
    if(strcmp(login,LOGIN)==0 &&strcmp(mdp,MDP)==0){
        printf("Accès autorisé");
    }else{
        printf("Accès refusé");
    }
    
    int compteur = 0;
    char chaine[100];
    char chaine2[100];
    int taille;
    int i;
    
    printf("Saisissez votre chaine de caractere");
    gets(chaine);
    taille = strlen(chaine);
    
    for(i=0;i<taille;i++){
        if(chaine[i]>= 'A' &&  chaine[i]<= 'Z'|| chaine[i]>= 'a' &&  chaine[i]<= 'z'){
            chaine2[i-compteur]=chaine[i];
            chaine2[i+1]='\0';
        }else{
            compteur++;
        }
        
        
        
    }
    
    printf("%s",chaine2);
    
    */
    
    
    char tab1[NBMAXCAR];
    char tab2[NBMAXCAR];
    
    int i;
    int taille;
    printf("Saisissez Chaine");
    gets(tab1);
    taille=strlen(tab1);
    int j=taille;
   
    for(i=0;i<taille;i++){
        tab2[j-1]=tab1[i];
    
        j=j-1;
    }
    
    printf("%s   -    %s",tab1,tab2);
    
    
    if(strcmp(tab1,tab2)==0){
        printf("\n C'est un Palindrome");
    }
    else{
        printf("\n Ce n'est Pas un Palindrome");
    }
         
    

    return (EXIT_SUCCESS);
}

