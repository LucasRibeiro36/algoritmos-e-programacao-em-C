//
// Created by lucas on 25/04/2021.
//

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int cont, i, numero = 0, cont_resto, numero_inicial, numero_final;
    printf("Insira o numero inicial do intervalo: ");
    scanf("%d", &numero_inicial);
    printf("Insira o numero final do intervalo: ");
    scanf("%d", &numero_final);
    printf("Os numeros primos entre %d e %d são : ", numero_inicial, numero_final);
    for (cont = numero_inicial; cont <= numero_final; cont++) {
        numero = cont;
        cont_resto = 0;
        for (i = 1; i <= numero; i++) {
            if (numero % i == 0) {
                cont_resto++;
            }
        }
        if (cont_resto == 2)
            printf("%d ", numero);
    }
}