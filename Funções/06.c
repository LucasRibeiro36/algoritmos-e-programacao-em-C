#include <stdio.h>
#include <math.h>

int countDivisors(unsigned int number) {
  int count = 0;

  for (int i = 0; i <= floor(sqrt(number)); i++) {
    if (number % i == 0) {
      if (number / i == i) {
        count++;
      } else {
        count += 2;
      }
    }  
  }

  return count;
}

int main() {
  printf("Número de divisores de 10 = %d\n", countDivisors(10));
  // printf("Número de divisores de 16 = %d\n", countDivisors(16));
  // printf("Número de divisores de 90 = %d\n", countDivisors(90));
  
  return 0;
}