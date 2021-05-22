#include <stdio.h>

int main(){
    int numero[6],temp;

    for (int i = 0; i < 5; i++){
        printf("Digite um numero: ");
        scanf("%d",&numero[i]);
    }
    for (int i = 0; i<=5;i++){
        for (int j = i+1; j<=5; j++){
            if (numero[i] > numero[j]){
                temp = numero[i];
                numero[i] = numero[j];
                numero[j] = temp;
            }
        }
    }
    for (int i = 0; i<=4;i++){
        printf("%d ", numero[i]);
    }

}  