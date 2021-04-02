//
// Created by lucas on 02/04/2021.
//

#include <stdio.h>

int main(){
    char cargo[16];
    double salario,novo_salario,diferenca;
    printf("Digite o cargo e o salario:");
    scanf("%s %lf",cargo,&salario);
    if ((cargo == "Gerente") || (cargo == "gerente")){
        novo_salario = salario + (salario * 0.10);
    } else if ((cargo == "Engenheiro") || (cargo == "engenheiro")){
        novo_salario = salario + (salario * 0.20);
    } else if ((cargo == "Tecnico") || (cargo == "tecnico")){
        novo_salario = salario + (salario * 0.30);
    } else{
        novo_salario = salario + (salario * 0.40);
    }
    diferenca = novo_salario - salario;
    printf("Cargo: %s\nSalario antigo: %.3lf\nSalario novo: %.3lf\nA diferença é de: %.3lf",cargo,salario,novo_salario,diferenca);
}