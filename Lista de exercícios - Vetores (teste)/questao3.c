#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int vetor[10];
	int par[5], impar[5];
	int i;
	int contPar = 0, contImpar = 0;
	
	for(i = 0; i < 10; i++){
		printf("Informe o %d n�mero: ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	// para verificar se o �ndice � par ou �mpar;
	for(i = 0; i < 10; i++){
		
		if(i % 2 == 0){
			par[contPar] = vetor[i];
			contPar++;
		} else {
			impar[contImpar] = vetor[i];
			contImpar++;
		}
	}
	
	printf("\nOs n�meros digitados no Vetor: \n");
	for(i = 0; i < 10; i++){
		printf("%d\n", vetor[i]);
	}
	
	printf("\nOs n�meros nas posi��es pares: \n");
	for(i = 0; i < contPar; i++){
		printf("%d\n", par[i]);
	}
	
	printf("\nOs n�meros nas posi��es �mpares: \n");
	for(i = 0; i < contImpar; i++){
		printf("%d\n", impar[i]);
	}
	
	
	
	return 0;
}
