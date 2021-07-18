#include <stdio.h>


int main(void) {
    float kwh, valor;
    int consumo;
    printf("Digite o Consumo:");
    scanf("%i", &consumo);
    if (consumo < 199) {
        kwh = 1.202;
    } else if ((consumo > 199) && (consumo < 400)) {
        kwh = 1.504;
    } else if ((consumo > 400) && (consumo < 600)) {
        kwh = 1.806;
    } else if (consumo > 600) {
        kwh = 2.00;
    }
    valor = consumo * kwh;
    printf("o valor é de %.2f", valor);
}

