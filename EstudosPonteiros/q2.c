#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void alteraValor(int *ptr, int tam){
	int i;
	
	for( i = 0; i < tam; i++){
		*(ptr + i) *= 2; //para que o valor de cada elemento do vetor seja multiplicado por 2.
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int vet[10];
	int i;
	
	printf("Informe os 10 números inteiros: \n");
	for(i = 0; i < 10; i++){
		scanf("%d", &vet[i]);
	}
	
	alteraValor(vet, 10);
	
	printf("\nVetor após alterar multiplicando por 2: ");
	for(i = 0; i < 10; i++){
		printf("\n%d", vet[i]);
	}
	printf("\n");
		
	
	return 0;
}
