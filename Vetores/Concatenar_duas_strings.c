#include <stdio.h>
#include <string.h>

int main() {
    char frase1[] = "frase1";
    char frase2[] = "frase2";
    char juntar[64];
    for (int i = 0; i < 6; i++) {
        juntar[i] = frase1[i];
    }
    for (int i = 6; i < 13; i++) {
        juntar[i] = frase2[i - 6];
    }
    printf("%s", juntar);
}