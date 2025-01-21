#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <limits.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num, maior = INT_MIN, menor = INT_MAX; // usamos essas coinstantes INT_MIN e INT_MAX para iniciar os valroes de maior e menor
	
	printf("Digite n�meros inteiros Positivos!\n"); 
	printf("Digite '0' para encerrar!\n");
	printf("Valores Negativos n�o entrar�o nos c�lculos! \n\n");
    
	printf("Digite o(s) n�mero(s): \n");
	
	while (1){ // condi��o que sempre ser� verdadeira. Loop infinito;
		
		if (scanf("%d", &num) != 1){ // verificar se o numero nao foi lido corretamente;
			
			while(getchar() != '\n'); // enquanto caractere lido n�o for n; o getchar foi usado para consumir os caracteres restantes, para nao afetar a proxima leitura;
			printf("Entrada Inv�lida!");
			continue;
		} 
		
		if(num == 0){
			break; // para encerrar!
		}
		
		if(num < 0) {
			printf("O n�mero digitado � NEGATIVO! Logo = IGNORADO!. \n");
			continue; // para ignorar os valores negativos!
			
		}
		
		
		if(num > maior){
			maior = num;
		}
		
		if(num < menor){
			menor = num;
		}
		
	}
	
	if(maior == INT_MIN || menor == INT_MAX){
		printf("Nenhum valor v�lido foi digitado.\n");
	} else {
		printf(" \n O maior n�mero: %d\n", maior);
		printf(" \n O menor n�mero: %d\n ", menor);
	}
	
	
	
	return 0;
}
