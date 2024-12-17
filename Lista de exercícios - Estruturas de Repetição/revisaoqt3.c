#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i , idade, qtdtotal = 15, fx1 = 0, fx2 = 0, fx3 = 0, fx4 = 0, fx5 = 0;
	float percentofx1 = 0, percentofx2 = 0, percentofx3 = 0, percentofx4 = 0, percentofx5 = 0;
	
	printf("Informe a idade de 15 pessoas: \n\n");
	
	for(i = 1; i <= 15; i++){
		printf("Digite a idade %d: ", i);
		scanf("%d", &idade);
		
		
	   switch(idade){
			case 1 ... 15:
				fx1++;
				break;
			case 16 ... 30:
				fx2++;
				break;
			case 31 ... 45:
				fx3++;
				break;
			case 46 ... 60:
				fx4++;
				break;
			default:
				if(idade >= 61){
					fx5++;
					break;
				} else{
					printf("A Idade informada esta fora das categorias! \n");
				}
		
		
         }
	
	}
	
	percentofx1 = (fx1*100)/qtdtotal;
	percentofx2 = (fx2*100)/qtdtotal;
	percentofx3 = (fx3*100)/qtdtotal;
	percentofx4 = (fx4*100)/qtdtotal;
	percentofx5 = (fx5*100)/qtdtotal;
	
	
	printf("\nA Quantidade de pessoa em cada faixa etária: \n\n");
	printf("  Faixa 1 a 15 anos = %d pessoas (%.f%%)\n", fx1, percentofx1);
	printf("  Faixa 15 a 30 anos = %d pessoas (%.f%%)\n", fx2, percentofx2);
	printf("  Faixa 31 a 45 anos = %d pessoas (%.f%%)\n", fx3, percentofx3);
	printf("  Faixa 46 a 60 anos = %d pessoas (%.f%%)\n", fx4, percentofx4);
	printf("  Faixa acima de 61 anos = %d pessoas (%.f%%)\n", fx5, percentofx5);
	
	
	
	
	return 0;
}
