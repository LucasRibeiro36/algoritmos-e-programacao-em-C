#include <stdio.h>

int main() {
    float altura, peso_ideal = 0;
    char sexo;
    printf("Informe sua altura e seu sexo:");
    scanf("%f %c", &altura, &sexo);
    if (sexo == 'F' || sexo == 'f') {
        peso_ideal = 62, 1 * altura - 44, 7;
    } else if (sexo == 'M' || sexo == 'm') {
        peso_ideal = 72, 7 * altura - 58;
    }
    printf("Seu peso ideal é %f", peso_ideal);

}