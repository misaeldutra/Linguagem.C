#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float sfixo, vendas, stotal, comissao;
	
	printf("Informe o sal�rio fixo: \n");
	scanf("%f", &sfixo);
	printf("Informe o valor das vendas: \n");
	scanf("%f", &vendas);
	
	if(vendas<=1500){
		comissao = 0.03*vendas;
	} else{
		comissao = 0.03*1500 + 0.05*(vendas-1500);
	}
	
	stotal = sfixo + comissao;
	
	printf("O sal�rio total do funcion�rio � R$ %.2f.", stotal);
	
	
	
	return 0;
}
