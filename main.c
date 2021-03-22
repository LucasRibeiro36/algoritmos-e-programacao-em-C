#include <stdio.h>
#include <stdlib.h>
int main(){
    int metros;
    float decimetros, centimetros, milimetros;
    printf("Digite os metros:");
    scanf("%i", &metros);
    decimetros = metros * 10; /* multiplica por 10*/
    centimetros = metros * 100;/* multiplica por 100*/
    milimetros = metros * 1000;/* multiplica por 1000*/
    printf("%i metros\n%.2f decimetros \n%.2f centimetros\n%.2f milimetros\n", metros, decimetros, centimetros ,milimetros);
    system("PAUSE");
    return(0);
}
