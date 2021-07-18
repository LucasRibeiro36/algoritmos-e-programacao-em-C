//
// Created by lucas on 02/04/2021.
//
#include <stdio.h>

int main() {
    int ano_nas, ano_atual, anos_tera, idade, anos_dias, anos_meses;
    printf("Digite o ano nascimento:");
    scanf("%i", &ano_nas);
    printf("Digite o ano atual:");
    scanf("%i", &ano_atual);
    idade = ano_atual - ano_nas;
    anos_tera = 2028 - ano_nas;
    anos_dias = idade * 365;
    anos_meses = idade * 12;
    printf("Sua idade é %i\nSua idade em 2028 é %i\nSua idade em dias é %i\nSua idade em meses é %i\n", idade,
           anos_tera, anos_dias, anos_meses);
}
