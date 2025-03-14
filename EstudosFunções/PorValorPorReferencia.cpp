#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int dobroPorValor(int dado);

void dobroPorReferencia(int *dado);

int main(){
	setlocale(LC_ALL,"Portuguese");
	int valor, resultado;
	
	printf("Informe um valor para calcular o dobro: ");
	scanf("%d", &valor);
	
	resultado = dobroPorValor(valor);
	
	printf("Dobro por valor = %d\n", resultado);
	
	dobroPorReferencia(&valor);
	
	printf("Dobro por referência = %d\n", valor);
	
	
	return 0;
}

int dobroPorValor(int dado){ //Por Valor;
	dado = dado*2;
    return dado;
}

void dobroPorReferencia(int *dado){ // Por Referência;
	*dado = *dado * 2;
	
}
