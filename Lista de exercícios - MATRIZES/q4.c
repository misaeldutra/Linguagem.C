#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int matriz[8][8];
	int i, j;
	
	printf("Informe os valores da matriz: \n ");
	for(i = 0; i < 8; i++){
		for(j = 0; j < 8; j++){
			printf("Elemento[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("\nMatriz gerada: \n");
	for(i = 0; i < 8; i++){
		for(j = 0; j < 8; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < 8; i++){
		for(j = i + 1; j < 8; j++){
			if(j > i){
			matriz[i][j] = 0;
		}
		}
	}
	
	printf("\nMatriz triangular inferior gerada:\n");
	for(i = 0; i < 8; i++){
		for(j = 0; j < 8; j++){
			printf("%3d", matriz[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}
