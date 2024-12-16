#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num, maior= 0, menor= 0;
	
	printf("Digite números inteiros Positivos!\n"); 
	printf("Digite '0' para encerrar!\n");
	printf("Valores Negativos não entrarão nos cálculos! \n\n");
    
	printf("Digite o(s) número(s): \n");
	
	while (1){ // condição que sempre será verdadeira. Loop infinito;
		
		if (scanf("%d", &num) != 1){ // verificar se o numero nao foi lido corretamente;
			
			while(getchar() != '\n'); // enquanto caractere lido não for n; o getchar foi usado para consumir os caracteres restantes, para nao afetar a proxima leitura;
			printf("Entrada Inválida!");
			continue;
		} 
		
		if(num == 0){
			break; // para encerrar!
		}
		
		if(num < 0) {
			printf("O número digitado é NEGATIVO! Logo = IGNORADO!. \n");
			continue; // para ignorar os valores negativos!
			
		}
		
		
		if(num > maior){
			maior = num;
		}
		
		if(num < menor){
			menor = num;
		}
		
	}
	
	if(maior == 0 && menor == 0){
		printf("Nenhum valor válido foi digitado.\n");
	} else {
		printf("O maior número: %d\n", maior);
		printf("O menor número: %d\n ", menor);
	}
	
	
	
	return 0;
}
