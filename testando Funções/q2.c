#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <limits.h>

void MaiorMenor ( int num, int *maior, int *menor){
	if(num > *maior){
		*maior = num;
	}
	
	if(num < *menor){
		*menor = num;
	}
	
	printf("\nO maior número digitado: %d", *maior);
	printf("\nO menor número digitado: %d\n\n", *menor);
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n;
	int maior = INT_MIN, menor = INT_MAX;
	
	while(1){
		printf("Informe um número (ou informe '0' para encerrar): ");
		scanf("%d", &n);
		
		if(n == 0){
			break;
		}
		
		if(n > maior){
			maior = n;
		}
		
		if(n < menor){
			menor = n;
		}
		
		MaiorMenor(n, &maior, &menor);
	}
	
	
	
	return 0;
}
