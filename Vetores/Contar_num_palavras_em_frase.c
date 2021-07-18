#include <stdio.h>
#include <string.h>

int main() {
    char nome[] = "ALGORITMOS LISTA";
    int quantidade = strlen(nome), cont = 0;
    for (int i = 0; i <= quantidade; i++) {
        if (nome[i] == ' ') {
            cont++;
        } else if (nome[i] == '\0') {
            cont++;
        }
    }
    printf("numero de palavras = %d\n", cont);
    return 0;
}