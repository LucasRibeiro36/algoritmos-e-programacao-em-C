#include <stdio.h>
#include <stdlib.h>
int main(void) {
    float nota_aluno;
    printf("Digite sua nota:");
    scanf("%f", &nota_aluno);
    if (nota_aluno >= 7.0){
        printf("Voce foi aprovado!!!\n");
    } else
    if(nota_aluno >= 3){
        printf("Voce esta na prova final!!!");
    }else
    if (nota_aluno < 3){
        printf("Nem na final vc conseguiu chegar!!!\n");
    }
}