#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, num;
	
	printf("Digite um n�mero: \n");
	scanf("%d", &num);
	
	printf("\n Tabuada de Multiplica��o do %d: \n", num);
	
	for( i=0; i<=10; i++){
		printf("    %d*%d = %d\n", num, i, num*i);
	}
	
	
	
	
	return 0;
}
