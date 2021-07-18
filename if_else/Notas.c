//
// Created by lucas on 01/04/2021.
//

#include <stdio.h>

int main() {
    long int num_inden;
    double ma, nota1, nota2, nota3, me;
    printf("Digite o numero de identificação");
    scanf("%li", &num_inden);
    printf("Digite 3 notas:");
    scanf("%lf %lf %lf", &nota1, &nota2, &nota3);

    me = (nota1 + nota2 + nota3) / 3;
    ma = (nota1 + nota2 * 2 + nota3 * 3 + me) / 7;
    if (ma >= 9.0) {
        printf("Numero de identificacao %i\nMedia dos exercicios %lf\nMedia de aproveitamento %lf A\n", num_inden, me,
               ma);
    } else if ((ma > 7.5) && (ma < 9.0)) {
        printf("Numero de identificacao %i\nMedia dos exercicios %lf\nMedia de aproveitamento %lf B\n", num_inden, me,
               ma);
    } else if ((ma > 6.0) && (ma < 7.5)) {
        printf("Numero de identificacao %i\nMedia dos exercicios %lf\nMedia de aproveitamento %lf C\n", num_inden, me,
               ma);
    } else if ((ma > 4.0) && (ma < 6.0)) {
        printf("Numero de identificacao %i\nMedia dos exercicios %lf\nMedia de aproveitamento %lf D\n", num_inden, me,
               ma);
    } else if (ma < 4.0) {
        printf("Numero de identificacao %i\nMedia dos exercicios %lf\nMedia de aproveitamento %lf E\n", num_inden, me,
               ma);
    }
}