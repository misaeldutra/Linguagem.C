#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	// Escrever um algoritmo que le um vetor K(15) e o escreve. Crie, a seguir, um vetor P, que contenha todos os números primos K. Escreva o vetor P.
	
	int K[15], P[15];
	int i, j, numero;
	int primo;
	
	if(numero < 2) return 0;
	
	for(i = 2; i * i <= numero; i++){
		if(numero % i == 0) return 0;
	}
	return 1; // logo, é primo;
	
	printf("\n Vetor K: ");
	for (i = 0; i < 15; i++){
		printf("%d", K[i]);
	}
	
	printf("\n P(primo): ");
	
	for (i = 0; i < j; i++){
		printf("%d", P[i]);
	}
	
	return 0;
}
