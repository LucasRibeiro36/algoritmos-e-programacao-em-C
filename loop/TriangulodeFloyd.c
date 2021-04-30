//
// Created by lucas on 29/04/2021.
//

#include <stdio.h>

int main(){
    int num,i = 0, num2 = 1, cont = 1;;
    printf("Digite o numero: ");
    scanf("%d",&num);

    while(i < num)
    {
        int j;
        for(j = 0; j < num2; j++)
        {
            printf("%d\t", cont);
            cont++;
        }
        printf("\n");
        num2++;
        i++;
    }
}