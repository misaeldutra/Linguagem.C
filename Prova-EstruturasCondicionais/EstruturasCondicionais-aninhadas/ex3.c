#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Algoritmo para verificar se o n�mero � par ou impar!
int main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	printf("Digite um n�mero: \n");
	scanf("%d", &num);
	
	if(num % 2 == 0){
		printf(" \n O n�mero digitado � PAR! \n", num);
	} else{
		printf(" \n O n�mero digitado � �MPAR! \n", num);
	}
	
	
	
	return 0;
}
