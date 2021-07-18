//
// Created by lucas on 29/04/2021.
//

#include <stdio.h>

int main() {
    int i, numero = 0, soma = 0;
    printf("Digite o numero: ");
    scanf("%d", &numero);
    printf("a soma dos divisores do número %d é", numero);
    for (i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            printf("+ %d ", i);
            soma += i;
        }
    }
    printf("= %d", soma);
}