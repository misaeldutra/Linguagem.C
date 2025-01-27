#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int vetor[10];
	int par[5], impar[5]; // a questão pede " na posicao impar e na par, ou seja , o indice;
	int i;
	int contadordePar = 0, contadordeImpar = 0;
	
	for(i = 0; i < 10; i++){
  	printf("Digite o %d° número: ", i+1);
   	scanf("%d", &vetor[i]);
    }
	
	for(i = 0; i < 10; i++){
		
		if(i % 2 == 0){
			par[contadordePar] = vetor[i];
			contadordePar++;
		} else{
			impar[contadordeImpar] =  vetor[i];
			contadordeImpar++;
		}
	}
    	
    printf("\nNúmeros digitados do Vetor:\n");
    for(i = 0; i < 10; i++){
    	printf(" %d\n", vetor[i]);
	}
	
	printf("\nOs números nas posições pares: \n");
	for(i = 0; i < contadordePar; i++){
		printf(" %d\n", par[i]);
	}
	
    printf("\nOs números nas posições ímpares: \n");
	for(i = 0; i < contadordeImpar; i++){
		printf(" %d\n", impar[i]);
	}
	
	
	return 0;
}
