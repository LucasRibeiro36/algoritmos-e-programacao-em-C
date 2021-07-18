//
// Created by lucas on 02/04/2021.
//
#include <stdio.h>

int main() {
    int ht, hte, sm, sb, ip, salario;
    printf("Digite as horas trabalhadas e salario minimo:");
    scanf("%i %i", &ht, &sm);
    hte = ht * 0.1;
    sb = ht * hte;
    ip = sb * 0.03;
    salario = sb - ip;
    printf("Salario é de %i", salario);
}
