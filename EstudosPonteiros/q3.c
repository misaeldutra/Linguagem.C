#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void MaiorMenor(int *v, int tam, int *maior, int *menor){
	int i;
	
	*maior = v[0];
	*menor = v[0];
	
	for(i = 0; i < tam; i++){
		if(v[i] > *maior){
			*maior = v[i];
		}
		
		if(v[i] < *menor){
			*menor = v[i];
		}
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int vet[10];
	int menor, maior;
	int i;
	
	printf("Informe os 10 números inteiros: \n");
	for(i = 0; i < 10; i++){
		scanf("%d", &vet[i]);
	}
	
	MaiorMenor(vet, 10, &maior, &menor);
	
	printf("\nO maior elemento: %d\n", maior);
	printf("\nO menor elemteno: %d\n", menor);
	
	
	
	return 0;
}
