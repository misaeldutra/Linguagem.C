#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i, num;
	float G1[100], G2[100];
	float media[100];
	
	printf("Informe o número de alunos: ");
	scanf("%d", &num);
	
	printf("\n Informe as notas G1: \n");
	for(i = 0; i < num; i++){ // i menor que o números de alunos informado pelo usuário;
		printf("Aluno %d - nota G1:", i+1);
		scanf("%f", &G1[i]);
	}
	
	printf("\n Informe as notas G2: \n");
	for(i = 0; i < num; i++){
		printf("Aluno %d - nota G2:", i+1);
		scanf("%f", &G2[i]);
	}
	
	for(i = 0; i < num; i++){
		media[i] = (G1[i] + G2[i]) / 2;
	}
	
	printf("\n Notas:\n");
	printf("\n Aluno\tG1\tG2\tMedia\n");
	for(i = 0; i < num; i++){
		printf("%d \t%.2f \t%.2f \t%.2f \n", i+1, G1[i], G2[i], media[i]);
	}
	
	
	
	
	return 0;
}
