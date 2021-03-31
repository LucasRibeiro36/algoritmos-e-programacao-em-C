#include <stdio.h>

int main(void) {
   float nota1, nota2, media;
   printf("Informe sua 1 nota:");
   scanf("%f", &nota1);
   printf("Informe sua segunda nota:");
   scanf("%f", &nota2);
   media = (nota1 + nota2) / 2;
   if (media < 5.0 ){
       printf("REPROVADO");
   } else if ((media > 5.1) && (media < 6.9)){
       printf("RECUPERACAO");
   } else if ((media > 7) && (media < 10)){
       printf("APROVADO");
   }
}