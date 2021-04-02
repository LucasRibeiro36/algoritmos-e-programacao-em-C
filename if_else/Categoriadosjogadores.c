//
// Created by lucas on 02/04/2021.
//

#include <stdio.h>

int main() {
    int idade;
    printf("Digite sua idade:");
    scanf("%i", &idade);
    if ((idade >= 5) && (idade <= 7)) {
        printf("Infantil A 5-7");
    } else if ((idade >= 8) && (idade <= 10)) {
        printf("Infantil B 8-10");
    } else if ((idade >= 11) && (idade <= 13)) {
        printf("Juvenil A 11-13");
    } else if ((idade >= 14) && (idade <= 17)) {
        printf("Juvenil B 14-17");
    } else if (idade >= 18) {
        printf("Adulto");
    }

}