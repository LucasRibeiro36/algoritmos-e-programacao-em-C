#include <stdio.h>
#include <string.h>
int main(){
    char nome[] = "ALGORITMOS";
    int quantidade = strlen(nome);;
    for (int i=quantidade-1; i>=0; i--){
        printf("%c\n",nome[i]);
    }
}