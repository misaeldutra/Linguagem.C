#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void exibicaoopc(){
	printf("\nOPÇÕES DE PAGAMENTO: \n");
	
	printf("\n1- A vista com 10%% de desconto.\n");
	printf("2- Em Duas vezes sem juros.\n");
	printf("3- De 3 até 10 vezes com 3%% de juros ao mês(para compras acima de R$ 100,00).\n\n");
}

int solicitacaodeopc(){
	int opc;
	
	printf("Qual a opção de pagamento? ");
	scanf("%d", &opc);
	return opc;
}

void AVista(float total){
	float ValorFinal;
	
	ValorFinal = total*0.90; // os 10% de desconto;
	printf("\nValor total a pagar a Vista: R$ %.2f\n.", ValorFinal);
}

void DuasVezes(float total){
	float parcelamento;
	
	parcelamento = total/2;
	
	printf("\nO pagamento em 2x de R$ %.2f\n", parcelamento);
}

void Parcelado( float total){
	int nparcelas;
	float Juros = 0.3;
	float TotalJuros;
	float Valordeparcela;
	
	if(total < 100.00){
		printf("\nOpção informada Inválida!\n");
		return;
	}
	
	printf("\nInforme o número de parcelas desejadas: ");
	scanf("%d", &nparcelas);
	
	if(nparcelas < 3 || nparcelas > 10){
		printf("\nNúmero de parcelas inválido!!\n");
		return;
	}
	
	TotalJuros = total*(1 + Juros*nparcelas);
	
	Valordeparcela = TotalJuros/nparcelas;
	
	printf("\nO pagamento de % vezes de R$ %.2f\n (Total com Juros: %.2f\n)", nparcelas, Valordeparcela, TotalJuros);
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	float total;
	int opc;
	
	printf("Informe o total gasto: R$ ");
	scanf("%f", &total);
	
	exibicaoopc();
	
	opc = solicitacaodeopc();
	
	switch (opc){
		case 1:
			AVista(total);
			break;
			
		case 2:
			DuasVezes(total);
			break;
			
		case 3:
			Parcelado(total);
			break;
			
		default:
			printf("\nOpção informada Inválida!\n");
	}
	
	
	
	return 0;
}
