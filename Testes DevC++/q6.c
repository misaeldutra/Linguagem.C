#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float saldo, debito, credito, saldoatual;
	
	printf("Informe o saldo: \n");
	scanf("%f", &saldo);
	printf("Informe o d�bito: \n");
	scanf("%f", &debito);
	printf("Informe o cr�dito: \n");
	scanf("%f", &credito);
	
	saldoatual =  saldo - debito + credito;
	
	printf("o saldo atual � R$ %.2f. \n", saldoatual);
	
	if(saldoatual>= 0){
		printf("SALDO POSITIVO! \n");
	} else {
		printf("SALDO NEGATIVO! \n");
	}
	
	
	
	return 0;
}
