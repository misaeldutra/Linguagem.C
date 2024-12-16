#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num, maior= 0, menor= 0;
	
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
	
	if(maior == 0 && menor == 0){
		printf("Nenhum valor v�lido foi digitado.\n");
	} else {
		printf("O maior n�mero: %d\n", maior);
		printf("O menor n�mero: %d\n ", menor);
	}
	
	
	
	return 0;
}
