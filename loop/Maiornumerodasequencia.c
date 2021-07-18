//
// Created by lucas on 29/04/2021.
//

#include <stdio.h>

int main() {
    int numero = 1, maior = 0, menor;
    while (numero > 0) {
        printf("Digite o numero: ");
        scanf("%d", &numero);
        if (numero > maior) {
            maior = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
        printf("Maior numero é %d\n", maior);
        printf("Menor numero é %d\n", menor);
    }

}