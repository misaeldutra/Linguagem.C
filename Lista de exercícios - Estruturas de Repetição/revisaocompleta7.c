#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, N, fatorial;
	
	printf("Digite um n�mero: ");
	scanf("%d", &N);
	
	fatorial = 1;
	
	if(N < 0){
		printf(" \n O fatorial n�o pode ser Negativo! \n\n");
	} else{
		for( i = 1; i <= N; i++){
			fatorial = fatorial*i;
		}
		
		printf(" \n %d! = %d. \n", N, fatorial);
	}
	
	
	
	
	
	
	
	
	return 0;
}
