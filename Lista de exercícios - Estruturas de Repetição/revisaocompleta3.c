#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, idade, total = 15, fx1 = 0, fx2 = 0, fx3 = 0, fx4 = 0, fx5 = 0; // Total igual a 15, pois é o número total de pssoas;
	float porcentagemfx1, porcentagemfx2, porcentagemfx3, porcentagemfx4, porcentagemfx5;
	
	printf("Digite a idade de 15 pessoas: \n\n");
	
	for( i=1; i<=15; i++){
		printf("Digite a idade %d: \n", i);
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
					printf("\n Idade fora das Categorias! \n");
				}
		}
	}
	
	porcentagemfx1 = (fx1*100)/total;
	porcentagemfx2 = (fx2*100)/total;
	porcentagemfx3 = (fx3*100)/total;
	porcentagemfx4 = (fx4*100)/total;
	porcentagemfx5 = (fx5*100)/total;
	
	printf("\n A Quantidade de pessoas em cada Faixa etária: \n");
	printf("Faixa 1 a 15 anos = %d pessoa(s) (%.f%%)\n", fx1, porcentagemfx1);
	printf("Faixa 16 a 30 anos = %d pessoa(s) (%.f%%)\n", fx2, porcentagemfx2);
	printf("Faixa 31 a 45 anos = %d pessoa(s) (%.f%%)\n", fx3, porcentagemfx3);
	printf("Faixa 46 a 60 anos = %d pessoa(s) (%.f%%)\n", fx4, porcentagemfx4);
	printf("Faixa acima de 61 anos = %d pessoa(s) (%.f%%)\n", fx5, porcentagemfx5);
	
	
	
	return 0;
}
