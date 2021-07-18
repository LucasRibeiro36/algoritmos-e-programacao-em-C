//
// Created by lucas on 24/04/2021.
//

#include <stdio.h>

int main() {
    int num, fatorial;
    printf("Digite um numero: ");
    scanf("%d", &num);
    for (fatorial = 1; num >= 1; num = num - 1)
        fatorial = fatorial * num;
    printf("Fatorial = %d\n", fatorial);
}