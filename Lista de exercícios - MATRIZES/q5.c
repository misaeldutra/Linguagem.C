#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int matriz[10][10];
	int i, j;
	int maiorvalor, col_maior, lin_maior;
	
	for(i = 0; i<10; i++){
		for(j = 0; j < 10; j++){
			printf("Informe o valor para posição [%d][%d]: ", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	maiorvalor = matriz[0][0];
	lin_maior = 0;
	col_maior = 0;
	
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			if(matriz[i][j] > maiorvalor){
				maiorvalor = matriz[i][j];
				lin_maior = i;
				col_maior = j;
			}
		}
	}
	
	printf("\nO maior valor é %d, localizado na linha %d e coluna %d.\n", maiorvalor, lin_maior+1, col_maior+1);
	
	
	return 0;
}
