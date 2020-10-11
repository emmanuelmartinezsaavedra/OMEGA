/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 11 de octubre de 2020, 02:22 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
     float a,b;
    int x,y,z,cont=0;
    float z2,z3;
    scanf("%f",&b);
    scanf("%f",&a);
    for(b;b<=a;b++){
        x=b;
        y=b;
        for(y;y<=a;y++){
            z=sqrt(pow(y,2)+pow(x,2));
            z2=sqrt(pow(y,2)+pow(x,2));
            z2=z2/z;
            if((z2==1) && (z<=a))
                cont++;
        }
    }
    printf("%d",cont);

    return (EXIT_SUCCESS);
}

