#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void exibicaodeOpc(){  //Fun��o que vai exibir as opcoes de pagamento para o usu�rio;
	printf("\nOP��ES DE PAGAMENTO: \n");
	
	printf("\n1- � vista com 10%% de desconto.\n");
	printf("2- Em duas vezes sem juros.\n");
	printf("3- De 3 at� 10 vezes com 3%% de juros ao m�s (para compras acima de R$ 100,00).\n");
}

int solicitacaodeOpc(){ //Fun��o que vai guardar qual a op��o selecionada pelo usu�rio;
	int opc;
	
	printf("\nQual a op��o de pagamento: ");
	scanf("%d", &opc);
	return opc;
}

void AVista(float total){ //Fun��o para pagamento a vista
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
		printf("\nOp��o informada inv�lida! \n");
		return;
	}
	
	printf("\nInforme o n�mero de parcelas desejadas (de 3 � 10): ");
	scanf("%d", &numparcelas);
	
	if(numparcelas < 3 || numparcelas > 10){
		printf("\nN�mero de parcelas inv�lido!");
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
			printf("\nOp��o informada Inv�lida!!\n");
	}
	
	
	return 0;
}
