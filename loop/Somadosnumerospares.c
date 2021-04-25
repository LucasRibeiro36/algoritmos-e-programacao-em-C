//
// Created by lucas on 24/04/2021.
//

#include <stdio.h>

int main(){
    int num,i,soma=0;
    printf("Digite um numero: ");
    scanf("%d",&num);
    for(i=0;i<=num;i+=2){
        soma+=i;
    }
    printf("A soma dos numeros pares de 1 ate %d e %d\n",num,soma);
}