#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// usamos o while pois não temos a quantidade definida!
int main(){
	setlocale(LC_ALL, "Portuguese");
	float valor, total = 0, total_limpeza = 0, total_alimentacao = 0, total_higiene = 0;
	char codigo;
	
	printf("Digite '0' para encerrar! \n");
	while (1){
		
		printf("Informe o código da mercadoria ( L,  A ou H):  ");
		scanf(" %c", &codigo);
		
		printf("Informe o valor da mercadoria: ");
		scanf("%f", &valor);
		
		if(valor == 0){
			break;//para encerrar!
		}
		
		switch(codigo){
			case 'L':
				total_limpeza = total_limpeza + valor;
				break;
			case 'A':
				total_alimentacao = total_alimentacao + valor;
				break;
			case 'H':
				total_higiene = total_higiene + valor;
				break;
			default:
				printf("\nCÓDIGO INVÁLIDO! \n Digite Novamente: \n");
				continue;
		}
		
		total = total + valor; // total geral!
		
		
	}
	
	printf("\n O Total vendido naquele dia, com todos os códigos juntos = %.2f \n", total);
	
	printf("\n O Total de vendas de Limpeza = %.2f\n", total_limpeza);
	
	printf("\n O Total de vendas de Alimentação = %.2f\n", total_alimentacao);
	
	printf("\n O Total de vendas de Higiene = %.2f\n", total_higiene);
	
	
	
	
	return 0;
}
