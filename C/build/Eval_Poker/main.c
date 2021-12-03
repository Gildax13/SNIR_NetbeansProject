

/* 
 * File:   main.c
 * Author: 
 *
 * Created on 28 novembre 2019, 08:53
 * Modified on 
 * Description : Poker aux dés simplifié
 */

#include <stdio.h>
#include <stdlib.h>


#include "poker.h"

int main(int argc, char** argv)
{
    char pseudoJ1[50];
    char pseudoJ2[50];
    int ageJ1;
    int ageJ2;
    int testAgeJ1;
    int testAgeJ2;
    int soldeJ1;
    int soldeJ2;
    int miseJ1;
    int miseJ2;
    char repJ1 = 'o';
    char repJ2 = 'o';
    int tabDesJ1[5];
    int tabDesJ2[5];
    
   // exemple d'affichage avec des couleurs
   // printf("du texte en %svert%s mais juste le mot vert\n",GREEN,GREY);
    
    // demander nom et age des 2 joueurs
    printf("%s|----------------------------Poker----------------------------|\n",GREY);
    printf("               %sBienvenue sur le jeu du %sPoker%s\n",GREY,GREEN,GREY);
    printf("      Veuillez saisir le %spseudo%s et l'%sage%s des joueurs\n",GREEN,GREY,GREEN,GREY);
    printf("|----------------------------Poker----------------------------|\n");
    printf("%sJoueur 1%s : Saisissez votre %spseudo%s\n",CYAN,GREY,GREEN,GREY);
    gets( pseudoJ1);
    printf("%sJoueur 1%s : Saisissez votre %sage%s\n",CYAN,GREY,GREEN,GREY);
    scanf("%d",&ageJ1);
    printf("%sJoueur 2%s : Saisissez votre %spseudo%s\n",PURPLE,GREY,GREEN,GREY);
    //j'ai voulu utiliser aussi ici un gets mais il ne prenait pas en compte ma saisie avec celui-ci
    scanf("%s",pseudoJ2);
    printf("%sJoueur 2%s : Saisissez votre %sage%s\n",PURPLE,GREY,GREEN,GREY);
    scanf("%d",&ageJ2);    
    
    printf("Les joueurs sont :  %s%s%s, %s%d%s ans  et %s%s%s, %s%d%s ans",CYAN,pseudoJ1,GREY,GREEN,ageJ1,GREY,PURPLE,pseudoJ2,GREY,GREEN,ageJ2,GREY);
    
    
    // tester si les ages permettent de joueur
    testAgeJ1=testerAge(ageJ1,18);
    testAgeJ2=testerAge(ageJ2,18);        
    if(testAgeJ1==0 && testAgeJ2==0){
         printf("\nLa partie peux donc %sCOMMENCER%s\n",RED,GREY);  
         
         printf("%sJoueur 1%s en premier puis %sJoueur 2%s\n",CYAN,GREY,PURPLE,GREY);
        // boucle de jeu
        do{
            // initialiser les cagnottes
         soldeJ1=100;
         soldeJ2=100;

            // boucle de partie (fin si l'un des joueurs a un solde de 0)
         
         do{
             // chaque joueur mise
             
            printf("%sJoueur 1%s :",CYAN,GREY);
            miseJ1=demanderMise(100);
            printf("%sJoueur 2%s :",PURPLE,GREY);
            miseJ2=demanderMise(100);
    
                    // lancement des des
            printf("\nRésultat du lancer pour le %sJoueur 1%s\n",CYAN,GREY);
            printf("-------------------------------------\n");
            printf("Numero de dés : ");
            for(int i=0;i<5;i++){
                tabDesJ1[i]=lancerUnDes(5);
                printf("| %d ",i);
            }
            printf("\n");
            printf("-------------------------------------\n");
            printf("Veleur du dés : ");
            for(int i=0;i<5;i++){
                printf("| %d ",tabDesJ1[i]);
      
            }
            printf("\n");
            printf("-------------------------------------\n");
            // choix du des a relancer pour Joueur 1
            printf("\n%sJoueur 1%s : Voulez vous relancer un dés ? (0,1,2,3,4 ou -1 si aucun)",CYAN,GREY);
            
            printf("\nRésultat du lancer pour le %sJoueur 2%s\n",PURPLE,GREY);
            printf("-------------------------------------\n");
            printf("Numero de dés : ");
            for(int i=0;i<5;i++){
                tabDesJ2[i]=lancerUnDes(5);
                printf("| %d ",i);
            }
            printf("\n");
            printf("-------------------------------------\n");
            printf("Veleur du dés : ");
            for(int i=0;i<5;i++){
                printf("| %d ",tabDesJ2[i]);
      
            }
            printf("\n");
            printf("-------------------------------------\n");
            
            
            printf("\n%sJoueur 2%s : Voulez vous relancer un dés ? (0,1,2,3,4 ou -1 si aucun)",PURPLE,GREY);
              // choix du des a relancer pour Joueur 2
           
            
            
            // afficher le résultat
                    
                
    
                    // choix du des a relancer pour chaque joueur et affichage de la nouvelle combinaison
    
    
                //calcul du score de chaque joueur
    
                // test du score du joueur 1 par rapport au score du joueur 2
            
                // affichage du gagnant et mise à jour des cagnottes
               
    
    
            //fin de la boucle de partie
            }while(soldeJ1!=0 && soldeJ2!=0);
            // tester qui a une cagnotte positive et afficher le vainqueur de la partie
            if(soldeJ1<0 ||soldeJ2<0){
                printf("Fin de %sPARTIE%s",RED,GREY);
                if(soldeJ1<0){
                    printf("Victoire du %sJoueur 2 %s",CYAN,GREY);
                }else{
                    if(soldeJ2<0){
                        printf("Victoire du %sJoueur 1 %s",PURPLE,GREY);
                    }
                }
            }
         do{  
         printf("Voulez vous rejouer ? (o ou n)");
         printf("%sJoueur 1:%s",CYAN,GREY);
         scanf("%s",&repJ1);
         printf("%sJoueur 2:%s",PURPLE,GREY);
         scanf("%s",&repJ2);
         }while(repJ1 !='o' || repJ1 !='n'||repJ2 !='o'|| repJ2 !='n');
         
         }while(repJ1=='o' && repJ2=='o');
            // demander à rejouer (réponse possible uniquement 'o' ou 'n')
            // reposer la question si pas 'o' ou 'n'
           
    
        // fin boucle jeu 
         
    
    
               
    
     
    }else{
       // sinon afficher un message et terminer le programme 
        printf("\n%s|----------------------------Avertissement----------------------------|",GREY);
        printf("\n                Vous ne pouvez malheureusement pas jouez"); 
        printf("\n          Il y a au minimum l'un d'entre vous qui n'est pas %sMajeur%s\n",RED,GREY); 
    }
    
     printf("Merci d'avoir joué ! Bon courage pour la suite !");

    // afficher un message d'au revoir






    return (EXIT_SUCCESS);
}
