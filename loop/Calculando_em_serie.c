//
// Created by lucas on 24/04/2021.
//

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numero, i, menor = 1000, soma_maiores = 0, soma_todos = 0;
    for (i = 1; i <= 10; i++) {
        printf("%d Digite um numero: ", i);
        scanf("%d", &numero);
        if (numero >= 100 && numero <= 1000) {
            if (numero <= menor) {
                menor = numero;
            }
            soma_maiores += numero;
        }
        soma_todos += numero;
    }

    printf("O menor valor entre 100 e 1000 é %d\nA soma dos maiores valores é %d\nA soma de todos os valores é %d\nA media dos maiores valores é %d",
           menor, soma_maiores, soma_todos, soma_maiores / 10);
}