#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2;
	printf("N�O SER�O LIDOS VALORES IGUAIS \n\n");
	
	
	printf("Digite um n�mero: \n");
	scanf("%d", &n1);
	
	printf("Digite outro n�mero: \n");
	scanf("%d", &n2);
	
	if(n1==n2){
		printf("Os valores digitados n�o devem ser iguais! \n");
	} else{
		if(n1>n2){
			printf(" \n A ordem crescente dos n�meros digitados � %d e %d", n2 , n1);
		} else{
			printf(" \n A ordem crescente dos n�meros digitados � %d e %d", n1 , n2);
		}
}
	
	return 0;
}
