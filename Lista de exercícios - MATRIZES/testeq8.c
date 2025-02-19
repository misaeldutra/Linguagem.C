#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	int matriz[5][5], SL[5]= {0}, SC[5] = {0};
	srand(time(NULL));
	int i, j;
	
	
	for( i = 0; i < 5; i++){
		SL[i] = 0;
		SC[i] = 0;
	}
	
	printf("\nMatriz gerada:\n");
	for( i = 0; i < 5; i++){
		for(  j = 0; j < 5; j++){
			matriz[i][j] = rand() % 10;
			SL[i] += matriz[i][j];
			SC[j] += matriz[i][j];
			printf("%2d", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\nA Soma das linhas: \n");
	for(i = 0; i < 5; i++){
		printf("%d ", SL[i]);
	}
	
	printf("\n\nA Soma das colunas: \n");
	for(  j = 0; j < 5; j++){
		printf("%d ", SC[j]);
	}
	printf("\n");
	
	
	
	
	
	return 0;
}
