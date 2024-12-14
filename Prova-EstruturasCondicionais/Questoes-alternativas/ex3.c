#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int cdg,  qtdcomprada;
	float ptotal, pUnit;
	
	printf(" PROGRAMA PARA CALCULAR PREÇO TOTAL DEVIDO POR CLIENTE! \n\n");
	
	printf("Digite o código do produto: \n ");
	scanf("%d", &cdg);
	printf("Digite a quantidade comprada: \n");
	scanf("%d", &qtdcomprada);
	
	switch(cdg){
		case 1001:
			pUnit = 5.32;
			break;
		case 1324:
			pUnit = 6.45;
			break;
		case 6548:
			pUnit = 2.37;
			break;
		case 987:
			pUnit = 5.32;
			break;
		case 7623:
			pUnit = 6.45;
			break;
		default:
			printf(" \n - CÓDIGO INVÁLIDO! \n ");
	}
	
	ptotal = pUnit*qtdcomprada;
	
	printf(" O preço total da compra = R$ %.2f", ptotal);
	
	
	
	return 0;
}
