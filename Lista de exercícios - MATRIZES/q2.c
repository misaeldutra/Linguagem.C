#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int matriz[7][8];
	int i, j;
	
	for(i = 0; i < 7; i++){
		for(j = 0; j < 8; j++){
			matriz[i][j] = i + j; //para preencher com a soma das posições;
		}
	}
	
	for(i = 0; i < 7; i++){
		for(j = 0; j < 8; j++){
			printf("%2d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
