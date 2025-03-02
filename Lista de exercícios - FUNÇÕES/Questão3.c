#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void exibicaodeOpc(){  //Função que vai exibir as opcoes de pagamento para o usuário;
	printf("\nOPÇÕES DE PAGAMENTO: \n");
	
	printf("\n1- Á vista com 10%% de desconto.\n");
	printf("2- Em duas vezes sem juros.\n");
	printf("3- De 3 até 10 vezes com 3%% de juros ao mês (para compras acima de R$ 100,00).\n");
}

int solicitacaodeOpc(){ //Função que vai guardar qual a opção selecionada pelo usuário;
	int opc;
	
	printf("\nQual a opção de pagamento: ");
	scanf("%d", &opc);
	return opc;
}

void AVista(float total){ //Função para pagamento a vista
	float ValorFinal;
	
	ValorFinal = total*0.90; // ou seja, 10% de desconto;
	printf("\nValor total a pagar a Vista: R$ %.2f\n.", ValorFinal);
}

void DuasVezes(float total){
	
	float parcelamento;
	
	parcelamento = total/2;
	
	printf("\nO pagamento em 2x de R$ %.2f.\n",parcelamento);
}

void Parcelado(float total){
	int numparcelas;
	
	float Juros = 0.03;
	float totalJuros;
	float valordeParcela;
	
	if(total < 100.00){
		printf("\nOpção informada inválida! \n");
		return;
	}
	
	printf("\nInforme o número de parcelas desejadas (de 3 á 10): ");
	scanf("%d", &numparcelas);
	
	if(numparcelas < 3 || numparcelas > 10){
		printf("\nNúmero de parcelas inválido!");
		return;
	}
	
	totalJuros = total*(1 + Juros *numparcelas);
	
	valordeParcela = totalJuros / numparcelas;
	
	printf("\nO pagamento em %d vezes de R$ %.2f\n (Total com Juros: R$ %.2f.)\n", numparcelas, valordeParcela, totalJuros);
	
} 

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int opc;
	float total;
	
	printf("Informe o total gasto: R$ ");
	scanf("%f", &total);
	
	exibicaodeOpc();
	
	opc = solicitacaodeOpc();
	
	switch (opc){ //tipos de pagamento;
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
			printf("\nOpção informada Inválida!!\n");
	}
	
	
	return 0;
}
