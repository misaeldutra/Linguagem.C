#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, num;
	
	printf("Digite um n�mero: \n");
	scanf("%d", &num);
	
	if(num <= 1){
		printf(" \n O N�MERO %d N�O � PRIMO! \n", num);
		return 0;
	}
	
	for( i = 2; i < num; i++){
		if(num % i == 0){
			printf("O N�MERO %d N�O � PRIMO \n", num);
			return 0;
		}
	}
	
	printf("\n O n�mero %d � PRIMO! \n", num);
	
	
	
	return 0;
}
