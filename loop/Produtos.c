//
// Created by lucas on 25/04/2021.
//

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int id=1, produtos = 0, produtos_caros = 0, media_produtos = 0;
    float valor,p_aumento,novo_valor, psa = 0,produto_caro;
    while (1){
        printf("-----------------------------------\n");
        printf("Digite o ID: ");
        scanf("%d",&id);
        if (id == 0)
            break;
        printf("Digite o Valor: ");
        scanf("%f",&valor);
        printf("Digite o percentual de aumento: ");
        scanf("%f",&p_aumento);
        produtos++;
        novo_valor = valor+(valor*(p_aumento/100));
        printf("Novo valor é %f\n",novo_valor);
        if ((novo_valor>=100)&&(p_aumento>=5))
            produtos_caros++;
            if (novo_valor > produto_caro)
                produto_caro=novo_valor;
        printf("Quantidade de produtos mais caros que 100 reais e aumento supeior a 5%% é de %d\n",produtos_caros);
        if (p_aumento == 0){
            psa++;
            media_produtos+=valor/psa;
        }
        printf("Media de valor de produtos sem aumento %d reais\n",media_produtos);
        printf("Valor do produto mais caro %f\n",produto_caro);
    }
}