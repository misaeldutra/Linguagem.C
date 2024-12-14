#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int senha;
	
	printf("Informe a senha de acesso: \n");
	scanf("%d", &senha);
	
	if(senha == 1234){
		printf(" ACESSO PERMITIDO! \n");
	} else{
		printf(" ACESSO NEGADO! \n");
	}
	
	
	
	
	return 0;
}
