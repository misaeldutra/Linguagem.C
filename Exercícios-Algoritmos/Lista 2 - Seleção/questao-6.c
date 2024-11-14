#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

 main() {
    float saldo, debito, credito, saldoatual;

    printf("Qual o saldo? ");
    scanf("%f", &saldo);

    printf("Qual o debito? ");
    scanf("%f", &debito);

    printf("Qual o credito? ");
    scanf("%f", &credito);

    saldoatual= saldo - debito + credito;

    printf("O saldo atual = %.2f \n", saldoatual);

    if(saldoatual>= 0){
        printf("Saldo Positivo!\n");
        
    }else{
        printf("Saldo Negativo!\n");
        saldoatual= 0;
    }

    

    printf("O saldo atual do cliente = %.2f\n", saldoatual);

system("pause");
return(0);
}