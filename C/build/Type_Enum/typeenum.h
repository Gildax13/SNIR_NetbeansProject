/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   typeenum.h
 * Author: apean
 *
 * Created on 3 décembre 2020, 10:00
 */

#ifndef TYPEENUM_H
#define TYPEENUM_H

#ifdef __cplusplus
extern "C" {
#endif

    typedef enum {Lundi,Mardi,Mercredi,Jeudi,Vendredi,Samedi,Dimanche} jours;
    typedef enum {FALSE,TRUE} boolean;
    boolean estUnPalindrome(char*);

#ifdef __cplusplus
}
#endif

#endif /* TYPEENUM_H */

