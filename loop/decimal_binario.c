//
// Created by lucas on 06/04/2021.
//

#include <stdio.h>

int main() {
    int numero;
    int binario[16], i;
    printf("Digite o numero:");
    scanf("%d", &numero);
    for (i = 15; i >= 0; i--) {
        if (numero % 2 == 0)
            binario[i] = 0;
        else
            binario[i] = 1;
        numero = numero / 2;
    }
    for (i = 0; i < 16; i++)
        printf("%d", binario[i]);
}