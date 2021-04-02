//
// Created by lucas on 02/04/2021.
//

#include <stdio.h>

int main(){
    char sexo;
    printf("Digite seu sexo:");
    scanf("%c",&sexo);
    if ((sexo == 'M') || (sexo == 'F') || (sexo == 'm') || (sexo == 'f')){
        printf("Sexo Valido");
    } else{
        printf("Sexo inválido!");
    }
}