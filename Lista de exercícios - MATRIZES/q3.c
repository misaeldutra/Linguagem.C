#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
    int	matriz[5][5];
    int i, j;
    int somaCol2 = 0, somaLin4 = 0;
    int somaDiagonalPrincipal = 0, somaDiagonalSecundaria = 0;
    int sTotal= 0;
    
    printf("Informe os números da matriz: \n");
    for(i = 0; i < 5; i++){
    	for(j = 0; j < 5; j++){
    		printf("Elemento[%d][%d]: ", i, j);
    		scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("\n  Matriz gerada: \n");
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			printf("%3d", matriz[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < 5; i++){
		somaLin4 = somaLin4 + matriz[3][i]; // soma da linha 4;
		somaCol2 = somaCol2 + matriz[i][1]; // soma coluna 2;
		somaDiagonalPrincipal = somaDiagonalPrincipal + matriz[i][i];
		somaDiagonalSecundaria = somaDiagonalSecundaria + matriz[i][j - 1 - i];
		
		for(j = 0; j < 5; j++){
			sTotal = sTotal + matriz[i][j];
		}
	}
	
	printf("\nA soma da linha 4 = %d\n", somaLin4);
	
	printf("\nA soma da coluna 2 = %d\n", somaCol2);
	
	printf("\nA soma da diagonal principal = %d\n", somaDiagonalPrincipal);
	
	printf("\nA soma da diagonal secundária = %d\n", somaDiagonalSecundaria);
	
	printf("\nA soma de todos os elementos = %d\n", sTotal);
	
	
	
	return 0;
}
