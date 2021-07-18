#include <stdio.h>

int main() {
    int a, b, c;
    /* possibilidades
     * a b c
     * a c b
     * b c a
     * b a c
     * c b a
     * c a b
     */
    printf("Digite 3 numeros:");
    scanf("%i %i %i", &a, &b, &c);
    if ((a < b) && (b < c)) {
        printf("%i %i %i", a, b, c);
    } else if ((a < c) && (c < b)) {
        printf("%i %i %i", a, c, b);
    } else if ((b < a) && (a < c)) {
        printf("%i %i %i", b, a, c);
    } else if ((b < c) && (c < a)) {
        printf("%i %i %i", b, c, a);
    } else if ((c < a) && (a < b)) {
        printf("%i %i %i", c, a, b);
    } else if ((c < a) && (b < c)) {
        printf("%i %i %i", c, b, a);
    } else if ((c < b) && (b < a)) {
        printf("%i %i %i", c, b, a);
    } else if ((c < a) && (a < b)) {
        printf("%i %i %i", c, a, b);
    }
}