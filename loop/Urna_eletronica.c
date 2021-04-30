//
// Created by lucas on 29/04/2021.
//

#include <stdio.h>

int main() {
    char p1[] = "whindesvaldo da motinha", p2[] = "Juilson do caregador 3.0", p3[] = "Vandernelson da mariscleida";
    char check;
    int voto = 0, voto_p1 = 0, voto_p2 = 0, voto_p3 = 0, voto_nulo = 0;
    printf("Prefeitos disponiveis sao \n1 %s\n2 %s\n3 %s\n", p1, p2, p3);
    printf("Digite o numero para o prefeito e 0 para nulo");
    scanf("%d", &voto);
    if (voto == 1){
        printf("Digite C pra confirmar e D pra corrigir\nDeseja votar no %s:", p1);
        scanf("%c", &check);
        if (check == "C")
            voto_p1++;
    }else if (voto == 2){
        printf("Digite C pra confirmar e D pra corrigir\nDeseja votar no %s:", p2);
        scanf("%c", &check);
        if (check == "C")
            voto_p2++;
    } else if (voto == 3){
        printf("Digite C pra confirmar e D pra corrigir\nDeseja votar no %s:", p3);
        scanf("%c", &check);
        if (check == "C")
            voto_p3++;
    }
}

