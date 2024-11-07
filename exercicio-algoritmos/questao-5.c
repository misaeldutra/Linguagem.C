#include <stdio.h>
#include <stdlib.h>

int main() {
    float custo, cfa, distrib, imposto;

    
    cfa= 0;
    distrib= 0.28;
    imposto= 0.45; 

    printf("Digite o custo de fabrica de um carro: " );
    scanf("%f", &cfa);

    distrib= cfa*0.28;

    custo= cfa +(cfa*imposto) + distrib;

    printf("O custo final ao consumidor foi de %.f\n" , custo);

    system("pause");
    return(0);


   
    
}