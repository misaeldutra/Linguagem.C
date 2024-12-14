#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int anonasc;
	
	printf("Digite o seu ano de nasc: \n ");
	scanf("%d", &anonasc);
	
	if(2026 - anonasc >= 16){
		printf("Pode votar! \n");
	} else{
		printf("Não poderá votar! \n");
	}
	
	
	
	
	
	return 0;
}
