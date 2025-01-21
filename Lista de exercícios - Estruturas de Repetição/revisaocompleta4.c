#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <limits.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num, maior = INT_MIN, menor = INT_MAX;
	
	printf("Digite n�meros inteiro Positivos!\n");
	printf("Digite '0' para encerrar!\n");
	printf("Valores negativos n�o entrar�o nos c�lculos!\n\n");
	
	printf("Digite o(s) n�mero(s): \n");
	
	while(1){
		if(scanf("%d", &num) != 1){
			while(getchar() != '\n');
			printf("ENTRADA INV�LIDA!\n");
			continue;
		}
		
		if(num == 0){
			break;
		}
		
		if(num < 0){
			printf("N�MERO NEGATIVO! Logo, IGNORADO!\n");
			continue;
		}
		
		if(num > maior){
			maior = num;
		} else if(num < menor){
			menor = num;
		}
		
		if(maior == INT_MIN || menor == INT_MAX){
			printf("Nenhum n�mero v�lido foi digitado!\n");
		} else{
			printf("O maior n�mero = %d\n", maior);
			printf("O menor n�mero = %d\n", menor);
		}
	}
	
	
	
	
	return 0;
}
