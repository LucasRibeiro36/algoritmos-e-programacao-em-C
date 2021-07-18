#include <stdio.h>

int main() {
    int salarios[5];
    printf("---------------------------------------\n");
    for (int i = 0; i <= 4; i++) {
        printf("Digite um salario: ");
        scanf("%d", &salarios[i]);
    }
    printf("---------------------------------------\n");
    printf("Salarios Atuais\n");
    for (int i = 0; i <= 4; i++)
        printf("Salario = %d\n", salarios[i]);
    printf("---------------------------------------\n");
    for (int i = 0; i <= 4; i++) {
        if (salarios[i] <= 1000) {
            salarios[i] = salarios[i] + (salarios[i] * 0.10);
        }
    }
    printf("Salarios reajustados\n");
    for (int i = 0; i <= 4; i++)
        printf("Salario novo = %d\n", salarios[i]);
    printf("---------------------------------------\n");
}