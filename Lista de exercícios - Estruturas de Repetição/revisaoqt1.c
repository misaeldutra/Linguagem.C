#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, num;
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	
	printf("\n A Tabela de Multiplica��o do n�mero %d: \n\n", num);
	
	for(i = 1; i<=10; i++){
		printf("  %d * %d = %d \n", num, i, num*i);
	}
	
	
	return 0;
}
