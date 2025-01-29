#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	// Escrever um algoritmo que le um vetor K(15) e o escreve. Crie, a seguir, um vetor P, que contenha todos os números primos K. Escreva o vetor P.
	
	int K[15], P[15];
	int i, indiceprimos = 0;
	int primo, num;
	int y; 
	
	printf("Informe 15 números para o vetor K: \n");
	for(i = 0; i < 15; i++){
	printf("\nK[%d]= ", i);
	scanf("%d", &K[i]);
    }
    
    for(i = 0; i < 15; i++){
    	num = K[i];
    	primo = 1; //pra testar se é primo;
    	
    	if(num <= 1){
    		primo = 0; // pois números igual ou menor q 1 não são primos;
		} else{
			for(y = 2; y < num; y++){
				if( num % 2 == 0){
					primo = 0; // logo não é primo;
					break;
				}
			}
		}
		if(primo){
			P[indiceprimos] = num;
			indiceprimos++; 
		}
	}
	
	printf("\n\n Vetor de números primos(P): \n");
		if(indiceprimos == 0){
			printf("   \nNenhum número primo encontrado entre eles. \n");
		} else {
			for(i = 0; i < indiceprimos; i++){
				printf("\n%d", P[i]);
			}
		}
	/* if(numero < 2) return 0;
	
	for(i = 2; i * i <= numero; i++){
		if(numero % i == 0) return 0;
	}
	return 1; // logo, é primo;
	
	printf("\n Vetor K: ");
	for (i = 0; i < 15; i++){
		printf("%d", K[i]);
	}
	
	printf("\n primos(P): ");
	
	for (i = 0; i < j; i++){
		printf("%d", P[i]);
	}*/
	
	return 0;
} 
