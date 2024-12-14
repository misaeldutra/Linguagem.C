#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float nlitros, valorfinal, desc;
	char combustivel;
	
	printf("Qual é o tipo de combustível? (A ou G)\n ");
	scanf(" %c", &combustivel);
	
	printf("Quantos litros? \n");
	scanf("%f", &nlitros);
	
	if(combustivel == 'a' || combustivel == 'A'){ 
		if(nlitros <= 20){
			desc = 0.03 * (nlitros * 2.9);	
		} else{
			desc = 0.05 * (nlitros * 2.9);
		}
		valorfinal = nlitros*2,9 - desc;
		printf("O valor pago pelo cliente foi R$ %.2f\n", valorfinal);
		
	} else if (combustivel == 'g' || combustivel == 'G'){
			if(nlitros <= 20){
				desc = 0.04*(nlitros*3.3);
			} else {
				desc = 0.06*(nlitros*3.3);
			}
			valorfinal = nlitros * 3.3 - desc;
			printf("O valor pago pelo cliente foi R$ %.2f\n", valorfinal);
		 
	} else{
			printf("VALOR INVÁLIDO! \n");
		}
	
	
	return 0;
}
