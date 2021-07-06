#include <stdio.h>

char getStudentConcept(float grade) {
  if (grade >= 0 && grade <= 4.9) {
    return 'D';
  }

  if (grade >= 5 && grade <= 6.9) {
    return 'C';
  }

  if (grade >= 7 && grade <= 8.9) {
    return 'B';
  }

  return 'A';
}

int main() {
  printf("8.9 = %c\n", getStudentConcept(8.9));
  printf("10 = %c\n", getStudentConcept(10));
  printf("5.9 = %c\n", getStudentConcept(5.9));
  printf("7.2 = %c\n", getStudentConcept(7.2));
  printf("4 = %c\n", getStudentConcept(4));

  return 0;
}