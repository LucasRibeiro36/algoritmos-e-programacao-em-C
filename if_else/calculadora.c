//
// Created by lucas on 05/04/2021.
//

#include <stdio.h>

int main(void) {
    int a,b;
    char operador;
    printf("Digite a operador:");
    scanf("%i %c %i",&a,&operador,&b);
    switch (operador) {
        case '+':
            printf("soma = %i + %i = %i",a,b,a+b);
            break;
        case '*':
            printf("multiplicacao = %i * %i = %i",a,b,a*b);
            break;
        case '/':
            printf("divisao = %i / %i = %i",a,b,a/b);
            break;
        case '-':
            printf("subtracao = %i - %i = %i",a,b,a-b);
    }
    return 0;
}