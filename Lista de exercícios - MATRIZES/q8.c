#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int matriz[5][5];
	int SL[5];
	int SC[5];
	int somaC = 0, somaL = 0;
	int i, j;
	int x;
	
	printf("Matriz gerada:\n");
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			matriz[i][j] = 1 + rand()% 20;
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			somaL = somaL + matriz[i][j];
		}
		SL[i] = somaL;
	}
	
	for(j = 0; j < 5; j++){
		for(i = 0; i < 5; i++){
			somaC = somaC + matriz[i][j];
		}
		SC[i] = somaC;
	}
	
	printf("\nSoma das linhas : \n\n");
	for(x = 0; x < 5; x++){
		printf("%d ", SL[x]);
	}
	
	printf("\nSoma das colunas : \n\n");
	for(x = 0; x<5; x++){
		printf("%d ", SC[x]);
	}
	
	return 0;
}
