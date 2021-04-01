//
// Created by lucas on 01/04/2021.
//
#include <stdio.h>

int main(){
    int a,b,c;
    printf("Digite a,b e c");
    scanf("%i %i %i",&a,&b,&c);
    if (a+b < c){
        printf("%i+%i é menor que %i",a,b,c);
    }
}