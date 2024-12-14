#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float qtdmacas, vmaca = 1.3 ;
	
	printf("Digite o numero de maçãs compradas: \n ");
	scanf("%f", &qtdmacas);
	
	if(qtdmacas >= 12){
		vmaca=1.0;
		printf("O custo total da compra foi de R$: %.2f ", vmaca*qtdmacas );
	}else{
		printf("O custo total da compra foi de R$: %.2f", vmaca*qtdmacas );
	}
	
	
	
	return 0;
}
