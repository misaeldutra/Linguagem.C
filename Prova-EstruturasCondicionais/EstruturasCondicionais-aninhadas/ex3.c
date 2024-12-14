#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Algoritmo para verificar se o número é par ou impar!
int main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	printf("Digite um número: \n");
	scanf("%d", &num);
	
	if(num % 2 == 0){
		printf(" \n O número digitado é PAR! \n", num);
	} else{
		printf(" \n O número digitado é ÍMPAR! \n", num);
	}
	
	
	
	return 0;
}
