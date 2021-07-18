#include <stdio.h>

int main() {
    float nota1, nota2, media;
    int aula1, aula2, frequencia;
    printf("me informe duas notas:");
    scanf("%f %f", &nota1, &nota2);
    printf("me informe o numero de aulas ministradas e aulas assistidas:");
    scanf("%i %i", &aula1, &aula2);
    frequencia = (aula2 * 100) / aula1;
    media = (nota1 + nota2) / 2;
    if (frequencia >= 75) {
        if (media >= 6) {
            printf("Aluno aprovado media %.2f", media);
        } else {
            printf("Aluno reprovado");
        }
    } else {
        printf("Aluno reprovado por falta");
    }
}
