#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//PASSAGEM DE PARÂMETRO POR VALOR

void alteraValor(int valor); // protótipo da função

int main(){
	setlocale(LC_ALL,"Portuguese");
	int valor = 10;
	
	printf("Valor antes da função: %d\n", valor);
	alteraValor(valor);
	printf("Valor após a função: %d\n", valor); //Observe que o valor dentro do main não sofreu as alterações, por ser passagem por parâmetro por valor
	
	return 0;
}

void alteraValor(int valor){
	valor = valor * 2;
	
	printf("Valor dentro da função: %d\n", valor);
}
