#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int matriz[4][4];
	int i, j;
	int troca = 0;
	
	printf("Informe os valores para a matriz: \n");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf("Elemento[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("\nA matriz gerada: \n");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf("%3d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < 4; i++){ // trocando os valores;
		troca = matriz[0][i];
		matriz[0][i] = matriz[i][3];
		matriz[i][3] = troca;
	}
	
	printf("\nMatriz gerada depois da troca:\n");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			printf("%3d", matriz[i][j]);
		}
		printf("\n");
}
	
	
	
	return 0;
}
