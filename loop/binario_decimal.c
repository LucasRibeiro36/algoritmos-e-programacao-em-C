//
// Created by lucas on 06/04/2021.
//

#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
    char bin[100];
    int decimal,i,s;
    printf("Digite o numero em binario:");
    scanf("%s",bin);
    s = strlen( bin );
    for (i = s-1; i >= 0; i--) {
        if (bin[i] == '1') {
            decimal += (pow(2,s-1-i));
            printf("%d",decimal);
        }
    }
    printf("\n%d\n",decimal);

}