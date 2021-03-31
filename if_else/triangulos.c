#include <stdio.h>

int main(void) {
    int a,b,c;
    printf("Digite os lados a,b,c");
    scanf("%i %i %i",&a,&b,&c);
    if ((a == b && b!=c) || (a!=b && b==c)){
        printf("é isoceles");
    }
    else if (a == b && b == c ) {
        printf("é equilatero");
    }
    else if (a != b && b != c) {
        printf("é escaleno");
    }
}