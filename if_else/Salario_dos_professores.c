//
// Created by lucas on 02/04/2021.
//

#include <stdio.h>

int main() {
    int horas;
    float salario1, salario2, salario3;
    printf("Digite as horas trabalhadas:");
    scanf("%i", &horas);
    salario1 = horas * 12.00;
    salario2 = horas * 17.00;
    salario3 = horas * 25.00;
    printf("Salario Professor Nivel 1 = %.2f\n", salario1);
    printf("Salario Professor Nivel 2 = %.2f\n", salario2);
    printf("Salario Professor Nivel 3 = %.2f\n", salario3);
}