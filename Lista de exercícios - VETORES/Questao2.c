#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vetor1[10];
	int vetor2[10];
	int vetorMultiplicacao[10];
	int i; // variavel para fazer o laço de repetição;
	
	for(i = 0; i<10; i++){
		printf("Digite o primeiro número(%d): ", i+1); // i+1 para não comecar com 0;
		scanf("%d", &vetor1[i]); // para pegar cada posicao;
		
		printf("Digite o segundo número(%d): ", i+1);
		scanf("%d", &vetor2[i]);
		
		vetorMultiplicacao[i] = vetor1[i] * vetor2[i]; // mesmo indice;
	}
	
	for(i = 0; i<10; i++){
		printf("\n %d * %d = %d\n", vetor1[i], vetor2[i], vetorMultiplicacao[i]);
	}
	
	
	return 0;
}
