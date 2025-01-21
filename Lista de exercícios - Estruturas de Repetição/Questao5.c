#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

//Algoritmo para verificar se determinado número digitado pelo usuário é primo ou não e imprimir na tela!
//primo é todo número que só pode ser dividido por 1 e por ele mesmo!
// obs: O numero deve ser maior que um para ser primo!
int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, i;// i = variável contadora
	
	printf("Digite um número: \n");
	scanf("%d", &num);
	
	if(num<=1){
		printf(" \n O NÚMERO %d NÃO É PRIMO! \n", num);
		return 0;
	}
	
	for(i = 2; i < num; i++){
		if(num % i == 0){ // se num for divisivel por i, logo mão é primo!
		printf("\n O NÚMERO %d NÃO É PRIMO! \n", num);
		return 0;
		}
	}
	
	printf("\n O NÚMERO %d É PRIMO! \n", num);
	
	
	return 0;
}
