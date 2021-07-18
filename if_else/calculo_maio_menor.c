//
// Created by lucas on 02/04/2021.
//

#include <stdio.h>

int main() {
    int valor1, valor2, diferenca;
    printf("Digite 2 numeros:");
    scanf("%i %i", &valor1, &valor2);
    if (valor1 > valor2) {
        diferenca = valor1 - valor2;
    } else if (valor2 > valor1) {
        diferenca = valor2 - valor1;
    }
    printf("A diferenca e de %i", diferenca);
}