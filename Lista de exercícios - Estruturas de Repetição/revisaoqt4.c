#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <limits.h> // Biblioteca para usar o INT_MAX

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, maior = 0, menor = 0; // inicializei o menor = INT MAX, pois se inicializasse com 0, o valor 0 sempre entraria como o menor valor do programa!
	
	printf("Digite n�meros inteiros Positivos!\n");
	printf("Digite '0' para encerrar! \n");
	printf("Valores Negativos n�o entrar�o nos c�lculos! \n\n");
	
	printf("Digite o(s) n�mero(s): \n");
	
	while(1){
		
		if(scanf("%d", &num) != 1){
			while(getchar() != '\n');
			printf("ENTRADA INV�LIDA!");
			continue;
		}
		
		if(num == 0){
			break;
			menor--;
		}
		
		if(num < 0){
			printf("O N�mero digitado � Negativo! (IGNORADO).\n");
			continue;
		}
		
		if(num > maior){
			maior = num;
		} else if(num < menor){
			menor = num;
		}
		
		
	}
	if (maior == 0 && menor == 0 ){
		printf("Nenhum n�mero v�lido foi digitado!");
	} else{
		printf("O maior n�mero digitado = %d\n", maior);
		printf("O menor n�mero digitado = %d\n", menor);
	}	
	
	
	return 0;
}
