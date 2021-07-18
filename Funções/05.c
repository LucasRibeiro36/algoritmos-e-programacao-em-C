#include <stdio.h>

int calculateFactorial(unsigned int number) {
    int factorial = 1;

    for (int i = number; i >= 1; i--) {
        factorial *= i;
    }

    return factorial;
}

int main() {
    printf("0! = %d\n", calculateFactorial(0));
    printf("5! = %d\n", calculateFactorial(5));
    printf("6! = %d\n", calculateFactorial(6));
    printf("10! = %d\n", calculateFactorial(10));
    printf("12! = %d\n", calculateFactorial(12));

    return 0;
}