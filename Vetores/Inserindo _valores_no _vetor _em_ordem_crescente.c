#include <stdio.h>

int main() {
    int numero[6], temp, incluir = 0, guardar[6], cont = 0;
    for (int i = 0; i < 5; i++) {
        printf("vetor - %d - Digite um numero: ", i);
        scanf("%d", &numero[i]);
    }
    while (incluir >= 0) {
        printf("Digite um vetor para incluir (menor que 4): ");
        scanf("%d", &incluir);
        if (incluir > -1) {
            if (cont != 5) {
                printf("Numero : ");
                scanf("%d", &temp);
                for (int i = 0; i <= 5; i++) {
                    guardar[i] = numero[i];
                }

                numero[incluir] = temp;

                for (int i = incluir; i < 7; i++) {
                    numero[i + 1] = guardar[i];
                }

                for (int i = 0; i <= 5; i++) {
                    printf("%d ", numero[i]);
                }
                for (int i = 0; i <= 5; i++) {
                    guardar[i] = numero[i];
                }
                printf("\n");
                cont++;
                printf("%d\n", cont);
            } else {
                incluir = -1;
            }
        }
    }

}  