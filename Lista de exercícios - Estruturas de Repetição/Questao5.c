#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

//Algoritmo para verificar se determinado n�mero digitado pelo usu�rio � primo ou n�o e imprimir na tela!
//primo � todo n�mero que s� pode ser dividido por 1 e por ele mesmo!
// obs: O numero deve ser maior que um para ser primo!
int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, i;// i = vari�vel contadora
	
	printf("Digite um n�mero: \n");
	scanf("%d", &num);
	
	if(num<=1){
		printf(" \n O N�MERO %d N�O � PRIMO! \n", num);
		return 0;
	}
	
	for(i = 2; i < num; i++){
		if(num % i == 0){ // se num for divisivel por i, logo m�o � primo!
		printf("\n O N�MERO %d N�O � PRIMO! \n", num);
		return 0;
		}
	}
	
	printf("\n O N�MERO %d � PRIMO! \n", num);
	
	
	return 0;
}
