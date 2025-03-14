#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void MaiorMenor(int n, int *maior, int *menor){
		if(n > *maior){
			*maior = n;
		}
		
		if(n < *menor){
			*menor = n;
		}
		
		printf("\nMaior n�mero digitado = %d\n", *maior);
		printf("Menor n�mero digitado = %d\n\n", *menor);
	}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n;
	int maior = INT_MIN, menor = INT_MAX;
	
	
	while(1){
		printf("Informe um n�mero(ou digite '0' para encerrar!): ");
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
		
		MaiorMenor(n, &maior, &menor); //por refer�ncia;
	}
	
	
	
	return 0;
}
