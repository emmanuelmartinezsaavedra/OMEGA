/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 11 de octubre de 2020, 02:13 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
     int n, x, c=0, num;
    scanf("%d",&n);
    scanf("%d",&x);
    do{
        scanf("%d",&num);
        if(num==x)
            c++;
        n--;
    }while(n>0);
    printf("%d",c);

    return (EXIT_SUCCESS);
}

