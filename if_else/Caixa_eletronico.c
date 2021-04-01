//
// Created by lucas on 01/04/2021.
//
#include <stdio.h>

int main() {
    int valor, notas50, notas10, notas5, notas1 = 0, resto50, resto10 = 0, resto5 = 0;
    printf("Digite o valor:");
    scanf("%i", &valor);
    notas50 = (valor / 50);   // O valor é dividido por 50.
    resto50 = valor % 50;
    notas10 = (resto50 / 10);
    resto10 = (valor % 10);
    notas5 = (resto10 / 5);
    resto5 = (valor % 5);
    notas1 = (resto5 / 1);
    printf("%i notas de 50,00 reais\n", notas50);
    printf("%i notas de 10,00 reais\n", notas10);
    printf("%i notas de 5,00 reais\n", notas5);
    printf("%i notas de 1,00 real\n", notas1);
}
