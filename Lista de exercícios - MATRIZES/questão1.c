#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float Matriz[4][3];
	float soma = 0.0;
	int escolhida;
	int i, j;
	
	printf("Informe os n�meros da matriz %dx%d: \n", 4, 3);
	for( i = 0; i < 4; i++){
		for( j = 0; j < 3; j++){
		printf("N�mero [%d][%d]:  ", i, j);
		scanf("%f", &Matriz[i][j]);
	    }
	}
	
	printf("\n A matriz informada pelo usu�rio foi: \n");
	for( i = 0; i < 4; i++){
		for( j = 0; j < 3; j++){
			printf("  %.2f", Matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\n Informe o n�mero da linha para calcular a soma: ");
	scanf("%d", &escolhida);
	
	if(escolhida >= 0 && escolhida < 4){
		for( j = 0; j < 3; j++){
			soma = soma + Matriz[escolhida][j];
		}
		printf("\n  A soma dos n�meros da linha %d: %.2f\n", escolhida, soma);
	} else{
		printf("O n�mero digitado � inv�lido!");
	}
	
	
	
	
	return 0;
}
