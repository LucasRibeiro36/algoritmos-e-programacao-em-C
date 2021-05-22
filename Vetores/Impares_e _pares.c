#include <stdio.h>

int main(){
    int inpares[5],pares[5],numeros[5];
    for (int i=0; i<=5;i++){
        printf("Digite o numero: ");
        scanf("%d",&numeros[i]);
    }
    printf("Numeros pares são:");
    for (int i= 0;i<=5;i++){
        if (numeros[i] % 2 == 0){
            printf("Pares %d\n",numeros[i]);
        }}
    printf("Numeros inpares são:");
    for (int i= 0;i<=5;i++){
        if (numeros[i] % 2 == 1){
            printf("Inpares %d\n",numeros[i]);
        }
    }
}