#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2;
	printf("NÃO SERÃO LIDOS VALORES IGUAIS \n\n");
	
	
	printf("Digite um número: \n");
	scanf("%d", &n1);
	
	printf("Digite outro número: \n");
	scanf("%d", &n2);
	
	if(n1==n2){
		printf("Os valores digitados não devem ser iguais! \n");
	} else{
		if(n1>n2){
			printf(" \n A ordem crescente dos números digitados é %d e %d", n2 , n1);
		} else{
			printf(" \n A ordem crescente dos números digitados é %d e %d", n1 , n2);
		}
}
	
	return 0;
}
