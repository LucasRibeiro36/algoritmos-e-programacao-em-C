#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char bin[100];
    int dec = 0;
    int i = 0;
    int s;
    fgets( bin, sizeof(bin), stdin);
    s = strlen( bin );
    while( s-- ) dec = dec + pow(2, i++) * (bin[s] - 48);
    printf("\nDecimal Equivalent of Binary Number: \t %d\n", dec);
    return 0;
}