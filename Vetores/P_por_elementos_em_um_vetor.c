#include <stdio.h>

int main() {
    int numero[6], temp, remover;

    for (int i = 0; i < 5; i++) {
        printf("vetor - %d - Digite um numero: ", i);
        scanf("%d", &numero[i]);
    }
    printf("Digite um vetor para excluir: ");
    scanf("%d", &remover);
    for (int i = 0; i <= 5; i++) {
        if (i == remover) {
            numero[i] = -1;
        }
    }


    for (int i = 0; i <= 4; i++) {
        if (numero[i] != -1) {
            printf("%d ", numero[i]);
        }
    }

}  