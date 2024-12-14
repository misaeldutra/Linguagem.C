#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	
	printf("Digite um número: \n");
	scanf("%d", &num);
	
	if(num>0){
		printf("NÚMERO POSITIVO! \n");
	} else if(num < 0){
		printf("NÚMERO NEGATIVO! \n");
	} else{
		printf("NÚMERO IGUAL A ZERO! \n");
	}
	
	
	
	return 0;
}
