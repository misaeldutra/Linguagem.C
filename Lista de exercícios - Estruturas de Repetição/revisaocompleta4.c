#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <limits.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num, maior = INT_MIN, menor = INT_MAX;
	
	printf("Digite números inteiro Positivos!\n");
	printf("Digite '0' para encerrar!\n");
	printf("Valores negativos não entrarão nos cálculos!\n\n");
	
	printf("Digite o(s) número(s): \n");
	
	while(1){
		if(scanf("%d", &num) != 1){
			while(getchar() != '\n');
			printf("ENTRADA INVÁLIDA!\n");
			continue;
		}
		
		if(num == 0){
			break;
		}
		
		if(num < 0){
			printf("NÚMERO NEGATIVO! Logo, IGNORADO!\n");
			continue;
		}
		
		if(num > maior){
			maior = num;
		} else if(num < menor){
			menor = num;
		}
		
		if(maior == INT_MIN || menor == INT_MAX){
			printf("Nenhum número válido foi digitado!\n");
		} else{
			printf("O maior número = %d\n", maior);
			printf("O menor número = %d\n", menor);
		}
	}
	
	
	
	
	return 0;
}
