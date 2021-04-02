//
// Created by lucas on 02/04/2021.
//

#include <stdio.h>

int main(){
    double sm, novo_sm = 0;
    printf("Digite seu saldo medio:");
    scanf("%lf",&sm);
    if ((sm >= 0) && (sm <= 200)){
        printf("Saldo de %.2lf\nNenhum credito disponivel\n",sm);
    } else if ((sm >= 201) && (sm <= 400)){
        novo_sm = sm + (sm * 0.20);
    } else if ((sm >= 401) && (sm <= 600)) {
        novo_sm = sm + (sm * 0.30);
    } else if (sm >= 601) {
        novo_sm = sm + (sm * 0.40);
    }
    if (novo_sm > 0){
        printf("Saldo de %.2lf\nSaldo emprestimo é de %.2lf\n",sm,novo_sm);
    }
}