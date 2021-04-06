//
// Created by lucas on 06/04/2021.
//

#include <stdio.h>

int main(){
    int numero = 90;
    int binario[8],i;

    for(i = 7; i >= 0; i--){
        if (numero % 2 == 0)
            binario[i] = 0;
        else
            binario[i] = 1;
        numero = numero / 2;
    }
    for (i = 0; i < 8; i++)
        printf("%d", binario[i]);
}