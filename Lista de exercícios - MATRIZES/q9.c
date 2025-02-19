#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int matriz[5][5];
	int SL[5], somaL = 0;
	int i, j;
	int x;
	
	srand(time(NULL));
	
	printf("\nMatriz gerada: \n");
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			matriz[i][j] = rand() % 10;
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < 5; i++){
	    somaL = 0;
	    for(j = 0; j < 5; j++){
	    	somaL = somaL + matriz[i][j];
		}
		SL[i] = somaL;
	}
	printf("\nVetor da soma das linhas:\n");
	for( x = 0; x < 5; x++){
		printf("%d ", SL[x]);
	}
	
	printf("\n\nMatriz final:\n");
	for( i = 0; i < 5; i++){
		for( j = 0; j < 5; j++){
			matriz[i][j] = matriz[i][j] * SL[i];
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	return 0;
}
