#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float salariorecebido, gastos_mes;
	
	printf("Digite o seu salário recebido: \n");
	scanf("%f", &salariorecebido);
	printf("Digite o valor dos seus gastos no mês: \n");
	scanf("%f", &gastos_mes);
	
	
	if(gastos_mes <= salariorecebido){
		printf(" Gastos dentro do orçamento! \n");
	} else {
		printf(" Orçamento Estourado! \n");
	}
	
	
	
	
	return 0;
}
