#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, spositivo = 0, snegativo = 0;
	
	printf("Informe uma lista de números Inteiros: \n");
	printf("Digite '0' para terminar! \n\n");
	
	while(1){ // Escolhemos o comando WHILE pois não temos uma quantidade definida de numeros digitados pelo usuario!
		printf("Digite um número: \n");
		scanf("%d", &num);
		
		if (num == 0){
			break;
		}
		
		if(num > 0){
			spositivo = spositivo + num;
		} else{
			snegativo = snegativo + num;
		}
	}
	
	printf(" \n A Soma dos números positivos = %d\n", spositivo);
	
	printf(" \n A soma dos números negativos = %d\n", snegativo);
	
	
	return 0;
}
