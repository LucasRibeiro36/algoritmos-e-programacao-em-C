#include <stdio.h>

int isEven(int number) {
  if (number % 2 == 0) return 1;

  return 0; 
}

int main() {
  int number;

  printf("Digite qualquer número: ");
  scanf("%d", &number);
  
  printf("O número digitado é %s\n", isEven(number) ? "par" : "ímpar");

  return 0;
}