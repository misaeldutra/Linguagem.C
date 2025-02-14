#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int matriz[4][3];
	int i, j;
	int soma = 0;
	int escolhida;
	
	printf("Informe os números da matriz: \n");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 3; j++){
			printf("Número [%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("\nMatriz 4x3: \n");
	for(i = 0; i < 4; i++){
		for(j = 0; j < 3; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\nInforme o número da linha para calcularmos a soma: ");
	scanf("%d", &escolhida);
	
	if(escolhida < 0 || escolhida >= 4){
		printf("Número de linha inválido!\n");
		return 1;
	}
	
	for(j = 0; j < 3; j++){
		soma = soma + matriz[escolhida][j];
	}
	
	printf("\nA soma dos números da linha %d é  %d.\n", escolhida , soma);

	return 0;
}
