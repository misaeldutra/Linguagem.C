#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int cdg,  qtdcomprada;
	float ptotal, pUnit;
	
	printf(" PROGRAMA PARA CALCULAR PRE�O TOTAL DEVIDO POR CLIENTE! \n\n");
	
	printf("Digite o c�digo do produto: \n ");
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
			printf(" \n - C�DIGO INV�LIDO! \n ");
	}
	
	ptotal = pUnit*qtdcomprada;
	
	printf(" O pre�o total da compra = R$ %.2f", ptotal);
	
	
	
	return 0;
}
