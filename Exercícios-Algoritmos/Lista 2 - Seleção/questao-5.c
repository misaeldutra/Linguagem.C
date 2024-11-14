#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main() {
    float sfixo, stotal, vendas, comissao;

    printf("Qual o salario fixo?: ");
    scanf("%f", &sfixo);
    printf("Qual o valor das vendas?: ");
    scanf("%f", &vendas);

    if(vendas <= 1500){
        comissao= 0,03*vendas;
    } else{
        comissao= 0,03*1500 + 0,05*(vendas-1500); // 5% do que ultrapassou das vendas
    }

    stotal = sfixo + comissao;

    printf(" O salario total e R$ %.2f\n ", stotal);

system("pause");
return(0);
}