#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int matriz[6][6];
	int i, j;
	
	for(i = 0; i < 6; i++){
		for(j = 0; j < 6; j++){
			if(i==j){
				matriz[i][j] = 1; // seria a diagonal principal;
			}else if (i + j == 6 -1){
				matriz[i][j] = 2;
			
			} else{
				matriz[i][j] = 3;
			}
		}
	}
	
	printf("\nMatriz gerada:\n");
	for(i = 0; i < 6; i++){
		for(j = 0; j < 6; j++){
			printf("%3d", matriz[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
