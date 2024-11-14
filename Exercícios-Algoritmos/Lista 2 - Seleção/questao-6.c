#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main() {
    float saldo, debito, credito, saldoatual;

    printf("Qual o saldo? ");
    scanf("%f", saldo);

    printf("Qual o debito? ");
    scanf("%f", debito);

    printf("Qual o credito? ");
    scanf("%f", credito);

    if(saldo>= 0){
        printf("Saldo Positivo!");
    }else{
        printf("Saldo Negativo!");
    }

    saldoatual= saldo - debito + credito;

    printf("O saldo atual do cliente foi %.2f", saldoatual);

system("pause");
return(0);
}