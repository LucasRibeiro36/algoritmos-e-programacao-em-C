//
// Created by lucas on 01/04/2021.
//
#include <stdio.h>

int main(){
    int numero;
    printf("Digite um numero:");
    scanf("%i", &numero);
    if (numero > 0) printf("%i",numero*2);
    else printf("%i",numero*3);
}
