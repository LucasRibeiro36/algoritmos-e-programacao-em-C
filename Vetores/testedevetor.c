#include <stdio.h>

int main() {
    const char *array[12] = {"_", "-", "_", "-", "_", "_", "*", "&", "¨¨", "%%", "@", "!"};
    printf("\n");
    for (int i = 1; i < 12; i++) {
        for (int cont = 1; cont < i + 1; cont++) {
            printf("%s ", array[cont]);
        }
        printf("\n");
    }
    printf("\n");
}