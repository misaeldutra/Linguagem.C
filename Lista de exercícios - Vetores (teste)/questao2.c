#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int vetor1[10];
	int vetor2[10];
	int i;
	int vetorMultiplicacao[10];
	
	for(i = 0; i < 10; i++){
		printf("Informe o primeiro número(%d): ", i + 1);
		scanf("%d", &vetor1[i]);
		
		printf("Informe o segundo número(%d): ", i + 1);
		scanf("%d", &vetor2[i]);
		
		vetorMultiplicacao[i] = vetor1[i] * vetor2[i];// ou seja, mesmo índice;
	}
	
	for( i = 0; i < 10; i++){
		printf("\n%d * %d = %d\n", vetor1[i], vetor2[i], vetorMultiplicacao[i]);
	}
	
	
	
	
	return 0;
}
