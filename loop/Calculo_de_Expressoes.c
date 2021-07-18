//
// Created by lucas on 25/04/2021.
//

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    double i, s = 0, auxiliar, a = 0, b = 1;
    printf("S = 100");
    for (i = 0; i <= 80; i += 5.0) {
        auxiliar = a + b;
        a = b;
        b = auxiliar;
        if (i != 0) {
            s += i / auxiliar;
            printf(" + %.0f/%.0f", i, auxiliar);
        } else {
            printf(" + %.0f/%.0f", i, auxiliar);
        }
    }
    printf(" = %f\n\n", s + 100);

}