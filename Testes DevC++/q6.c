#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float saldo, debito, credito, saldoatual;
	
	printf("Informe o saldo: \n");
	scanf("%f", &saldo);
	printf("Informe o débito: \n");
	scanf("%f", &debito);
	printf("Informe o crédito: \n");
	scanf("%f", &credito);
	
	saldoatual =  saldo - debito + credito;
	
	printf("o saldo atual é R$ %.2f. \n", saldoatual);
	
	if(saldoatual>= 0){
		printf("SALDO POSITIVO! \n");
	} else {
		printf("SALDO NEGATIVO! \n");
	}
	
	
	
	return 0;
}
