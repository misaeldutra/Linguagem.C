#include <stdio.h>
#include <stdlib.h>

// Algoritmo para ler uma nota e imprimir APROVADO(A) caso a nota seja maior ou igual a 7 e imprimir REPROVADO(A) caso a nota seja menor que 7

int main(){
	
	float m;
	
	printf("Insira uma nota:\n");
	scanf("%f", &m);
	
	if(m >= 7.0){
		printf("APROVADO(A)!\n");
	} else {
		printf("REPROVADO(A)!\n");
	}
	
	
	
	return 0;
}
