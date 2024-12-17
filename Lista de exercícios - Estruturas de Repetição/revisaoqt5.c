#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, num;
	
	printf("Digite um número: \n");
	scanf("%d", &num);
	
	if(num <= 1){
		printf(" \n O NÚMERO %d NÃO É PRIMO! \n", num);
		return 0;
	}
	
	for( i = 2; i < num; i++){
		if(num % i == 0){
			printf("O NÚMERO %d NÃO É PRIMO \n", num);
			return 0;
		}
	}
	
	printf("\n O número %d é PRIMO! \n", num);
	
	
	
	return 0;
}
