#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int dobroPorValor (int dado);

void dobroPorReferencia(int *dado);

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int valor, resultado;
	
	printf("Informe um valor para calcular o dobro: ");
	scanf("%d", &valor);
	
	resultado = dobroPorValor(valor);
	printf("DOBRO POR VALOR: %d\n", resultado);
	
	dobroPorReferencia(&valor); //passa por refer�ncia, alterando esse valor;
	printf("DOBRO POR REFER�NCIA: %d\n", valor);
	
	return 0;
}


int dobroPorValor (int dado){  //tem q ser int ao inv�s de "void", pois est� retornando um valor,por ser passagem por valor
	dado = dado * 2;
	return dado; // alguem tem que receber o que vem do return, no caso � o "resultado"
}


void dobroPorReferencia(int *dado){
	*dado = *dado * 2;
}
