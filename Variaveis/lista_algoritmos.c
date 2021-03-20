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
#include <stdio.h>

int main(){
    /*declare as variaveis*/
    int nota_aluno = 9;
    char inic_nome = 'L';
    int n_mat = 01;
    char sexo = 'M';
    /*imprima*/
    printf("Nome %c, Nota %i, Matricula %i, Sexo %c.", inic_nome, nota_aluno, n_mat, sexo);
}
#include <stdio.h>
#include <stdlib.h>
int main(){
    float p1,p2,p3,mf;
    printf("Me informe os 3 valores das suas notas:");
    scanf("%f %f %f",&p1,&p2,&p3);/*obtem os valores*/
    mf = (p1 + p2 + p3)/3.0;/*soma a media final*/
    printf("MF: %.3f\n", mf);/* imprime a media final com 3 digitos antes do . */
    system("PAUSE");
    return(0);
}
#include <stdio.h>
#include <stdlib.h>

int main(){
    float h,r,c,qlat,area,litro;
    printf("Me informe o valor da altura e do raio:");
    scanf("%f %f",&h,&r);
    area = (3.14*r*r)+(2*3.14*r*h); /*calculo da area*/
    litro = area / 3.0;/*calculo do litro*/
    qlat = litro / 5.0; /*calculo da quantidade*/
    c = qlat * 10.00;/*calculo do custo*/
    printf("O custo da pintura e de %f\n", c);
    printf("O gasto total de latas e de %f\n", qlat);
    system("PAUSE");
    return(0);
}
#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,y;
    float z;
    printf("Informe o valor de X:\n");
    scanf("%i", &x);
    printf("%i ao cubo = %i\n",x, x*x*x) ;
    printf("Informe o valor de Y:\n");
    scanf("%i", &y);
    printf("O resultado de X + Y = %i\n", x+y);
    z = (float)x / y;
    printf("%.2f\n", z);
    z = (int)z;
    printf("%.0f\n",z);
    z= z+1;
    x = (int)(y + z) % 2;
    printf("%i\n", x);
    system("PAUSE");
    return(0);
}

#include <stdio.h>
#include <stdlib.h>
int main(){
    double f,c;
    printf("me informe um valor em Fahrenheit:");
    scanf("%lf", &f);
    c = (f-32.0)*(5.0/9.0);
    printf("%.2lf graus Celsius\n",c);
    system("PAUSE");
    return(0);
}








#include <stdio.h>
#include <stdlib.h>
int main(){
    int f,c;
    printf("me informe um valor em Fahrenheit:");
    scanf("%i", &f);
    c = (f-32.0)*(5.0/9.0);
    printf("%i graus Celsius\n",c);
    system("PAUSE");
    return(0);
}
