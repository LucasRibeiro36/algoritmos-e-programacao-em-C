//
// Created by lucas on 02/04/2021.
//

#include <stdio.h>

int main(){
    float valor;
    printf("Digite o valor do produto:");
    scanf("%f",&valor);
    if (valor <= 20){
        printf("Valor pago pelo cliente = %.2f",valor + (valor * 0.40));
    } else{
        printf("Valor pago pelo cliente = %.2f",valor + (valor * 0.30));
    }
}