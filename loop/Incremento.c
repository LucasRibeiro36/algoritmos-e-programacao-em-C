//
// Created by lucas on 24/04/2021.
//

#include <stdio.h>

int main(){
    int  limite=0,incr=0,i=0;
    printf("Digite o valor: ");
    scanf("%d",&limite);
    printf("Digite o incremento: ");
    scanf("%d",&incr);
    for(i=0;i<=limite;i = i + incr){
        printf("%d\n",i);
    }
}