#include <stdio.h>

int factorial(unsigned int number) {
    int factorial = 1;

    for (int i = number; i >= 1; i--) {
        factorial *= i;
    }

    return factorial;
}

int getSumSerie(int x) {
    int sum = 0;

    for (int i = 1; i <= x; i++) {
        sum += factorial(i) / i;
    }

    return sum;
}

int main() {
    printf("A soma da série é: %d\n", getSumSerie(5));

    return 0;
}