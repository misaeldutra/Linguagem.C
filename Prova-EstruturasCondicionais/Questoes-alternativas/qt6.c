#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int  qtdlaranjas;
	float vlaranja = 0.30;
	
	printf("Digite a quantidade de laranjas compradas: \n");
	scanf("%d", &qtdlaranjas);
	
	if(qtdlaranjas >=12){
		vlaranja = 0.25;
		printf("O valor total da compra é R$ %.2f." , qtdlaranjas*vlaranja );
	} else {
		printf("O valor total da compra é R$ %.2f. ", qtdlaranjas*vlaranja);
	}
		
	
	return 0;
}
