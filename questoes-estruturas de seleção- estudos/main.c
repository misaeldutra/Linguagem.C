#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float qtdmaca, valormaca= 1.3;
	
	printf("Digite o numero de macas compradas: ");
	scanf("%f",&qtdmaca);
	
	if(qtdmaca>= 12){
	
		valormaca=1.0;
		printf("O valor total da compra foi: %.2f .", valormaca*qtdmaca);
	}else
		printf("O valor total da compra foi: %.2f .", valormaca*qtdmaca);
		
	system("pause");
	return(0);
	
	
	
}
