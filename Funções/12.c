#include <stdio.h>

int perfect_number(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) sum += i;
    }

    return num == sum;
}

int main() {
    int lim_min;
    int lim_max;
    printf("Digite o Limite minimo: ");
    scanf("%d", &lim_min);
    printf("Digite o limite maximo: ");
    scanf("%d", &lim_max);
    for (int i = lim_min; i < lim_max; i++) {
        if (perfect_number(i)) {
            printf("%d é Perfeito\n", i);
        }
    }
}