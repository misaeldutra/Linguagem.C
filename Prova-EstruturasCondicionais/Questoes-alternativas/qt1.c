#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	
	printf("Digite um n�mero: \n");
	scanf("%d", &num);
	
	if(num>0){
		printf("N�MERO POSITIVO! \n");
	} else if(num < 0){
		printf("N�MERO NEGATIVO! \n");
	} else{
		printf("N�MERO IGUAL A ZERO! \n");
	}
	
	
	
	return 0;
}
