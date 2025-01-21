#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, idade, qtdmaiores;
	
	qtdmaiores = 0;
	
	printf("Digite a idade de 10 pessoas: \n\n");
	
	for (i=1; i<=10; i++){
		printf("Digite a idade %d: \n", i);
		scanf("%d", &idade);
		
		if(idade >= 18){
			qtdmaiores++;
		}
	}
	
	printf("A quantidade de pessoas maiores de idade = %d pessoas. \n", qtdmaiores);
	
	
	return 0;
}
