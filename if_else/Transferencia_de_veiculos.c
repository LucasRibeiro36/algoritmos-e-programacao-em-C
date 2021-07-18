//
// Created by lucas on 02/04/2021.
//

#include <stdio.h>

int main() {
    int ano;
    double preco, valor = 0;
    printf("Digite o ano e o preço:");
    scanf("%i %lf", &ano, &preco);
    if (ano < 1990) {
        valor = preco + (preco * 0.1);
    } else if (ano > 1990) {
        valor = preco + (preco * 0.15);
    }
    printf("O valor do carro e de %.3f\n", valor);
}