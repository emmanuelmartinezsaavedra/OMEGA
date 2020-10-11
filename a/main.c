/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 11 de octubre de 2020, 01:23 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int N,a1,a2,b=0;
    
    scanf("%d",&N);
    scanf("%d",&a1);
    while(N>1){
        scanf("%d",&a2);
        if(a1>a2){
            b++;
        }
        N--;
    }
    printf("\n");
    printf("%d",b);

    return (EXIT_SUCCESS);
}

