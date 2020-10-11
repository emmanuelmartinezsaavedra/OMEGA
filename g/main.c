/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 11 de octubre de 2020, 02:09 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int a,b;
    scanf("%i", &a);
    int lol[100001];
    for(int i=0;i<100002;++i)lol[i]=0;
    for(int i=0;i<a;++i)scanf("%i", &b),lol[b]=i+1;
    scanf("%i", &a);
    for(int i=0;i<a;++i)scanf("%i", &b),printf("%i ", lol[b]);

    return (EXIT_SUCCESS);
}

