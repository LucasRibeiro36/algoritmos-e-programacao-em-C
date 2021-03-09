#include <stdio.h>
#include <stdlib.h>
//* Variaveis em C *//

int main(void){
    int a, b;
    float soma;
    char nome[13];
    printf("digite seu nome: ");
    scanf("%s", nome);
    printf("OK %s, digite um numero: ", nome);
    scanf("%d", &a);
    printf("digite outro numero:");
    scanf("%d", &b);
    soma =  a + b;
    printf("a soma de %d + %d = %f", a, b , soma);

}a