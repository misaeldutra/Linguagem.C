#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Algoritmo para calcular o fatorial N!
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int N, i;
	int fatorial;

	
	printf("Informe um número inteiro: \n");
	scanf("%d", &N);
	
	fatorial = 1;
	
	if(N<0){
		printf(" \n O FATORIAL NÃO PODE SER NEGATIVO! \n ");
	} else {
		
		for (i=1; i <= N; i++){
			fatorial = fatorial*i;
		}
		
		printf("%d! = %d \n", N, fatorial);
	}
	
	
	return 0;
}
