#include <stdio.h>

int main() {
    char palavra[32];
    int i;

    printf("Entre com a palavra: ");
    scanf("%[^\n]", palavra);

    for (i = 0; palavra[i] != '\0'; i++)
        if (palavra[i] >= 97 && palavra[i] <= 122) {
            if (palavra[i] != ' ') {
                palavra[i] -= 32;
            }
        } else {
            if (palavra[i] != ' ') {
                palavra[i] += 32;
            }
        }

    printf("\nNovo palavra: %s\n", palavra);

    return 0;
}