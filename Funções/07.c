#include <stdio.h>

double square(int number) {
  return number * number;
}

int main() {
  double number;

  printf("Insira qualquer número para o quadrado: ");
  scanf("%lf", &number);

  printf("O quadrado de %.2lf é: %.2lf\n", number, square(number));

  return 0;
}