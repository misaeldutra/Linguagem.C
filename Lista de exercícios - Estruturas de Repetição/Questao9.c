#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, spositivo = 0, snegativo = 0;
	
	printf("Informe uma lista de n�meros Inteiros: \n");
	printf("Digite '0' para terminar! \n\n");
	
	while(1){ // Escolhemos o comando WHILE pois n�o temos uma quantidade definida de numeros digitados pelo usuario!
		printf("Digite um n�mero: \n");
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
	
	printf(" \n A Soma dos n�meros positivos = %d\n", spositivo);
	
	printf(" \n A soma dos n�meros negativos = %d\n", snegativo);
	
	
	return 0;
}
