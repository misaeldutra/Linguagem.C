#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float saldo, debito, credito, saldoatual;
	
	printf("Digite o saldo: \n");
	scanf("%f", &saldo);
	
	printf("Digite o d�bito: \n");
	scanf("%f", &debito);
	
	printf("Digite o cr�dito: \n");
	scanf("%f", &credito);
	
	saldoatual = saldo - debito + credito;
	
	printf("O saldo atual � R$ %.2f. \n", saldoatual);
	
	if(saldoatual >= 0){
		printf("SALDO POSITIVO! \n");
	} else{
		printf("SALDO NEGATIVO! \n");
	}
	
	
	return 0;
}
