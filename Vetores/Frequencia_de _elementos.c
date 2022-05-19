#include <stdio.h>

int main() {
  int numero[3];
  int frequencia[3] = {0, 0, 0};
  int numero_ant = 0;
  for (int i = 0; i < 3; i++) {
    printf("Digite um numero: ");
    scanf("%d", &numero[i]);
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 3; j >= 0; j--) {
      if (numero[i] == numero[j]) {
        frequencia[j] += 1;
      }
    }
  }
  for (int i = 0;  i <= 3; i++) {
    if (numero[i] != numero_ant) {
      printf("Numero %d apareceu %d\n", numero[i], frequencia[i]);
      numero_ant = numero[i];
    } else {
      i++;
    }
  }
}
