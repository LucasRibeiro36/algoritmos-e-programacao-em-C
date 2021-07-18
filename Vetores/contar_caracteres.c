#include <stdio.h>
#include <string.h>

int main() {
    char nome[] = "ALGORITMOS LISTA";
    int quantidade = strlen(nome), cont = 0;
    for (int i = 0; i <= quantidade; i++) {
        cont++;
    }
    printf("numero de caracteres = %d\n", cont);
    return 0;
}