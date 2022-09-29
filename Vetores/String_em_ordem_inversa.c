#include <stdio.h>
#include <string.h>

int main() {
  char nome[] = "ALGORITMOS";
  char inv[10];
  int j = 0;
  int quantidade = strlen(nome);
  for (int i = quantidade-1; i >= 0; i--) {
    inv[j] = nome[i];
    j++;
  }
  printf("%s", inv);
}
