#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    int htrabalho, salarioh, stotal= salarioh*htrabalho;

    printf("Digite o numero de horas trabalhadas no mes: ");
    scanf("%d", &htrabalho);

    printf("Qual o salario por hora? ");
    scanf("%d", salarioh);


    if(htrabalho>40){
        printf("O salario total foi %.d", stotal*0.5);
    }
    else
        printf("O salario total foi %.d", stotal);

system("pause");
return(0);
}