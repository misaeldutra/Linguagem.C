#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(){
	int numero;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	if(numero>10)
		printf("O numero digitado e Maior que 10! \n");
	else
		printf("O numero digitado NAO e Maior que 10! \n");
	system("pause");
	return(0);
}