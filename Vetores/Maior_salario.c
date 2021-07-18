#include <stdio.h>

int main() {
    int salarios[10], maior = 0;
    for (int i = 0; i <= 9; i++) {
        printf("Digite o seu salario: ");
        scanf("%d", &salarios[i]);
    }
    for (int i = 0; i <= 9; i++) {
        if (salarios[i] >= maior) {
            maior = salarios[i];
        }
    }
    printf("Maior Salario = %d\n", maior);
}