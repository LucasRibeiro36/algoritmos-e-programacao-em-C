#include <stdio.h>

int main() {
    int vet1[5], vet2[5], media = 0, soma = 0;
    printf("primeiro vetor:\n");
    for (int i = 0; i < 5; i++) {
        printf("Digite o numero: ");
        scanf("%d", &vet1[i]);
    }
    printf("segundo vetor:\n");
    for (int i = 0; i < 5; i++) {
        printf("Digite o numero: ");
        scanf("%d", &vet2[i]);
    }
    printf("---------------------------------------\n");
    for (int i = 0; i <= 4; i++) {
        printf("Soma de %d + %d = %d\n", vet1[i], vet2[i], vet1[i] + vet2[i]);
    }
    printf("---------------------------------------\n");
    for (int i = 0; i <= 4; i++) {
        printf("Diferença de %d - %d = %d\n", vet1[i], vet2[i], vet1[i] - vet2[i]);
    }
    printf("---------------------------------------\n");
    for (int i = 0; i <= 4; i++) {
        printf("Produto de %d * %d = %d\n", vet1[i], vet2[i], vet1[i] * vet2[i]);
    }
    printf("---------------------------------------\n");
    for (int i = 0; i <= 4; i++) {
        printf("Divisão de %d * %d = %d\n", vet1[i], vet2[i], vet1[i] / vet2[i]);
    }
    printf("---------------------------------------\n");
}