#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <limits.h>

void MaiorMenor (int num, int *maior, int *menor){
	
	if(num > *maior){
		*maior = num;
	}
	if(num < *menor){
		*menor = num;
	}
	
	printf("\nO maior número digitado: %d\n", *maior);
    printf("O menor número digitado: %d\n\n", *menor);
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num; 
	int maior = INT_MIN, menor = INT_MAX;
	
	while(1){
		
		printf("Informe um número (ou digite 0 para encerrar): \n");
		scanf("%d", &num);
		
		if(num == 0){
			break;
		}
		
		if(num > maior){
			maior = num;
		}
		
		if(num < menor){
			menor = num;
		}
		
		MaiorMenor(num, &maior, &menor);
		
		
	}
	
	
	
	
	
	return 0;
}
