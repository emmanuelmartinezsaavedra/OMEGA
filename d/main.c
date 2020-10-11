/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 11 de octubre de 2020, 02:03 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int N,x=1,x2;
    scanf("%d",&N);
    while(x<=N){
        x2=x;
        while(x2>0){
            printf("%d",x);
            x2--;
        }
        x++;
        printf("\n");
    }
    x--;
    x--;
    while(x>0){
        x2=x;
        while(x2>0){
            printf("%d",x);
            x2--;
        }
        x--;
        printf("\n");
    }

    return (EXIT_SUCCESS);
}

