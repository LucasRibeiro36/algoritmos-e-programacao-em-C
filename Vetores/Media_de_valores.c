#include <stdio.h>

int main() {
    int numero[5], media = 0;
    printf("Calculando medias:\n");
    for (int i = 0; i < 5; i++) {
        printf("Digite a media: ");
        scanf("%d", &numero[i]);
        media += numero[i];
    }
    printf("A media foi %d\n", media / 5);
}