#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int vetor[7];
	int i, maior = 0, menor;
	int iMaior, iMenor;
	
	for(i = 0; i < 7; i++){
		printf("Informe o %d n�mero: ", i + 1);
		scanf("%d", &vetor[i]);
		
		if(vetor[i] > maior){
			maior = vetor[i];
			iMaior = i;
		}
		
		if(vetor[i] < menor){
			menor = vetor[i];
			iMenor = i;
		}
	}
	
	for(i = 0; i < 7; i++){
		printf("\nVetor posi��o(%d) = %d. ", i, vetor[i]);
		
		if(iMenor == i){
			printf("Menor n�mero! ");
		} else if(iMaior == i){
			printf("Maior n�mero! ");
		}
	}
	
	
	
	
	
	return 0;
}
