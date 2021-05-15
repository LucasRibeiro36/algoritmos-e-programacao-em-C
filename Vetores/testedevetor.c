#include <stdio.h>
int main(){
    int vetor[15];

    for (int cont=0;cont<=15;cont++){
        vetor[cont] = cont*3;
        printf("%d ",cont*3);
    }

    for (int i = 0; i < 16; i++)
    {
        printf("%d\n",vetor[i]);
    }
}