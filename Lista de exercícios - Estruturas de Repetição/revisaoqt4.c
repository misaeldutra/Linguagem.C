#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <limits.h> // Biblioteca para usar o INT_MAX

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, maior = 0, menor = 0; // inicializei o menor = INT MAX, pois se inicializasse com 0, o valor 0 sempre entraria como o menor valor do programa!
	
	printf("Digite números inteiros Positivos!\n");
	printf("Digite '0' para encerrar! \n");
	printf("Valores Negativos não entrarão nos cálculos! \n\n");
	
	printf("Digite o(s) número(s): \n");
	
	while(1){
		
		if(scanf("%d", &num) != 1){
			while(getchar() != '\n');
			printf("ENTRADA INVÁLIDA!");
			continue;
		}
		
		if(num == 0){
			break;
			menor--;
		}
		
		if(num < 0){
			printf("O Número digitado é Negativo! (IGNORADO).\n");
			continue;
		}
		
		if(num > maior){
			maior = num;
		} else if(num < menor){
			menor = num;
		}
		
		
	}
	if (maior == 0 && menor == 0 ){
		printf("Nenhum número válido foi digitado!");
	} else{
		printf("O maior número digitado = %d\n", maior);
		printf("O menor número digitado = %d\n", menor);
	}	
	
	
	return 0;
}
