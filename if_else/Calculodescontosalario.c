//
// Created by lucas on 02/04/2021.
//

#include <stdio.h>

int main(){
    int  salario;
    printf("Digite o salario:");
    scanf("%i",&salario);
    if (salario < 600){
        printf("O desconto foi isento");
    } else if ((salario > 600)&&(salario < 1200)){
        printf("O desconto foi  20%%");
    } else if ((salario > 1200)&&(salario < 2000)){
        printf("O desconto foi  25%%");
    } else if (salario > 2000){
        printf("O desconto foi  30%%");
    }

}