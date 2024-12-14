#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float nmaca, vmaca = 1.3;
	
	printf("Digite o número de maças compradas: \n");
	scanf("%f", &nmaca);
	
	if(nmaca>=12){
		vmaca = 1.0;
		printf("O Custo total da compra é R$ %.2f", nmaca*vmaca);
	} else{
		printf("O Custo total da compra é R$ %.2f", nmaca*vmaca);
	}
	
	
	return 0;
}
