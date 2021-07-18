#include<stdio.h>
#include<stdlib.h>

int *decimalToBinary(int number) {
    int *binary = malloc(sizeof(int) * 7);

    for (int i = 0; i < 8; i++) {
        binary[i] = number % 2;
        number = number / 2;
    }

    return binary;
}

void printBinary(int *binary) {
    for (int i = 0; i < 7; i++) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    int number;

    printf("Insira qualquer número decimal: ");
    scanf("%d", &number);

    int *binary = decimalToBinary(number);

    printf("O valor binário é: ");
    printBinary(binary);

    return 0;
}  