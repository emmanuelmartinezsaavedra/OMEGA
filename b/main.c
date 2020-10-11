/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 11 de octubre de 2020, 01:35 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
     int N,num;
    char cad[100000];
    int a=0,b2;
    scanf("%d",&N);
    while(N>0){
        
        scanf("%d",&num);
        if((num%3==0) && (num%5!=0)){
             cad[a]=1;
            
        }
        if((num%5==0) && (num%3!=0)){
            cad[a]=2;
            
        }
        if((num%3==0) && (num%5==0)){
            cad[a]=3;
            
        }
        if((num%3!=0) && (num%5!=0)){
            cad[a]=4;
            
        }
        a++;
        N--;
    }
    b2=a;
    a=0;
    while(a<=b2){
        if(cad[a]==1)
            printf("Fizz\n");
        if(cad[a]==2)
            printf("Bozz\n");
        if(cad[a]==3)
            printf("FizzBozz\n");
        if(cad[a]==4)
            printf("NoFizzBozz\n");
        a++;
        
    }

    return (EXIT_SUCCESS);
}

