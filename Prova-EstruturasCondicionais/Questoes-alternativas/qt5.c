#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float salariorecebido, gastos_mes;
	
	printf("Digite o seu sal�rio recebido: \n");
	scanf("%f", &salariorecebido);
	printf("Digite o valor dos seus gastos no m�s: \n");
	scanf("%f", &gastos_mes);
	
	
	if(gastos_mes <= salariorecebido){
		printf(" Gastos dentro do or�amento! \n");
	} else {
		printf(" Or�amento Estourado! \n");
	}
	
	
	
	
	return 0;
}
