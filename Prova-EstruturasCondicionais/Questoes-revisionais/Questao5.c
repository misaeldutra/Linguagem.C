#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float sfixo, vendas, salariototal, comissao;
	
	printf("Digite o salário fixo: \n");
	scanf("%f", &sfixo);
	
	printf("Digite o valor das vendas: \n");
	scanf("%f", &vendas);
	
	if(vendas <= 1500){
		comissao = 0.03*vendas;
	} else {
		comissao = 0.03*1500 + 0.05*(vendas-1500);
	}
	
	salariototal = sfixo + comissao;
	
	printf("O salário total do vendedor foi de R$ %.2f. ", salariototal);
	
	
	return 0;
}
