#include <stdio.h>

int perfect_number(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) sum += i;
    }

    return num == sum;
}

int main() {
    int num = 6;

    printf("%d %s\n", num, perfect_number(num) ? "é perfeito." : "não é perfeito.");
}