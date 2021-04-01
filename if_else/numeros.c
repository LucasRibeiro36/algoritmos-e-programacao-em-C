#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    printf("Digite 3 numeros:");
    scanf("%i %i %i",&a,&b,&c);
    if ( a > 0){
        printf("tripo do primeiro numero %i\n", a * 3);
    }else{
        printf("primeiro numero ao quadrado %f\n",pow(a,2));
    }
    if ((b > 10) && (b < 100)){
        printf("o numero esta entre 10 e 100 -  intervalo permitido\n");
    }
    if ( c < b){
        printf("%i\n",b-c);
    }else{
        printf("%i\n",c+1);
    }
}