#include <stdio.h>

int main(void) {
    int publico;
    printf("Digite o publico:");
    scanf("%i", &publico);
    if (publico < 1000) {
        printf("Publico baixo");
    } else if ((publico > 1001) && (publico < 10000)) {
        printf("Publico medio");
    } else if (publico > 10000) {
        printf("Publico bom");
    }
}

