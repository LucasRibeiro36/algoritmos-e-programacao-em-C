//
// Created by lucas on 01/04/2021.
//
#include <stdio.h>

int main(){
    int a,b,c;
    printf("Digite 2 numeros:");
    scanf("%i %i",&a,&b);
    c = (a == b) ? a + b : a * b;
    printf("%i",c);
}

