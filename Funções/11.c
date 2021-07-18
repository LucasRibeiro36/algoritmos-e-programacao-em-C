#include <stdio.h>

int getPrimeNumber(int number) {
    int cont = 0;
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            cont++;
        }
    }
    return cont == 2;
}

int main() {
    int number;
    printf("Digite um numero positivo:");
    scanf("%d", &number);
    printf("%d %s\n", number, getPrimeNumber(number) ? "é primo" : "não é primo");
}