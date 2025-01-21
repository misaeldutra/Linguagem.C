#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, num;
	
	printf("Digite um número: \n");
	scanf("%d", &num);
	
	printf("\n Tabuada de Multiplicação do %d: \n", num);
	
	for( i=0; i<=10; i++){
		printf("    %d*%d = %d\n", num, i, num*i);
	}
	
	
	
	
	return 0;
}
