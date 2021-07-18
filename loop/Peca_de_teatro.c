//
// Created by lucas on 25/04/2021.
//

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int pessoas_perguntadas = 1, idade, identificador, nota, nota_cont = 0, idade_media = 0, idade_velha = 0, velha_identificador = 0;
    float nota_cont_abaixo = 0;

    while (pessoas_perguntadas <= 100) {
        printf("Pessoa %d\n", pessoas_perguntadas);
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        printf("Digite seu identificador: ");
        scanf("%d", &identificador);
        printf("Digitee a nota sobre a peça: ");
        scanf("%d", &nota);
        if (nota == 10)
            nota_cont++;
        idade_media += idade;
        if (nota <= 5)
            nota_cont_abaixo++;
        if (idade > idade_velha) {
            idade_velha = idade;
            velha_identificador = identificador;
        }
        pessoas_perguntadas++;
    }
    printf("Notas 10 são %d\n", nota_cont);
    printf("Porcentagem das notas abaixo de 5 são %.3f\n", (nota_cont_abaixo * 100) / 100);
    printf("A media das idades é %d\n", idade_media / 100);
    printf("Identificador da mais velha é %d\n", velha_identificador);
    return 0;
}
