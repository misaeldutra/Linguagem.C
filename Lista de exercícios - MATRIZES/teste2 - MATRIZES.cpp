#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	// mesmo exemplo, porem usando as estruturas de repetição para ficar mais fácil;
	int matriz[3][3] = {{1, 2, 3}, {4, 5, 6,}, {7, 8, 9}}; // maneira mais facil de inicializar 
	int i, j;
	
	printf("Imprimindo a primeira linha:\n");
	for(j = 0; j < 3; j++){
		printf("%d ", matriz[0][j]); // ja deixa claro que iremos acessar todos os numeros da posição 0, ou seja, da primeira linha!
	}
	
	printf("\n\nimprimindo a matriz completa: \n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n"); // para ficar linha embaixo de linha;
	}
	
	
	
	
	return 0;
}
