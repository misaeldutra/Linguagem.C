#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float litros, vtotal, desc;
	char combustivel;
	
	printf("Qual o tipo de combustível? (A ou G)\n ");
	scanf(" %c", &combustivel);
	
	printf("Quantos litros: \n");
	scanf("%f", &litros);
	
	if(combustivel == 'a' || combustivel == 'A'){
		if(litros <= 20){
			desc = 0.03* (litros*2.90);
		} else{
			desc = 0.05* (litros*2.90);
		}
		vtotal= litros*2.9 - desc;
		printf("O valor pago pelo cliente foi R$ %.2f\n", vtotal);
		
	}else if(combustivel == 'g' || combustivel == 'G'){
		if(litros <= 20){
			desc = 0.04* (litros*3.30);
		} else{
			desc = 0.06* (litros*3.30);
		}
		vtotal = litros*3.30 - desc;
		printf("O valor pago pelo cliente foi R$ %.2f\n", vtotal);
	}else{
		printf("VALOR INVÁLIDO! \n");
	}
		
	
	
	
	
	return 0;
}
