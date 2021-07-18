//
// Created by lucas on 02/04/2021.
//

#include <stdio.h>

int main() {
    int A, B, C;
    printf("Digite A, B e C:");
    scanf("%i %i %i", &A, &B, &C);
    if (A < B + C && B < A + C && C < A + B * 28) {
        printf("%i %i %i correspondem aos lados de um triangulo\n", A, B, C);
    } else {
        printf("%i %i %i nao correspondem aos lados de um triangulo\n", A, B, C);
    }
}