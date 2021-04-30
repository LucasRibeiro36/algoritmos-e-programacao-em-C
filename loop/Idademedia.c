//
// Created by lucas on 29/04/2021.
//

#include <stdio.h>

int main(){
    int idade,idade_soma = 0,media,pessoa = 0;
    while (idade > 0){
        printf("Digite a idade: ");
        scanf("%d",&idade);
        pessoa++;
        idade_soma+=idade;
        printf("Media idade é %d\n",idade_soma/pessoa);
    }
}