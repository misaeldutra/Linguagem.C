#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// IF ELSE ANINHADO = significa if else dentro de outros if else, ou seja, encadeados!

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int n1, n2;
	
	printf("Digite o primeiro n�mero: \n");
	scanf("%d", &n1);
	printf("Digite o segundo n�mero: \n");
	scanf("%d", &n2);
	
	if(n1 == n2)
		printf("Os n�meros digitados s�o iguais! \n");
	else
		if(n1>n2)
			printf("O maior valor � = %d\n", n1);
		else
			printf("O maior valor � = %d\n", n2);
		
	
	
	
	
	return 0;
}
