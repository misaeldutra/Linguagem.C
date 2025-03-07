#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//PASSAGEM DE PARÂMETRO POR REFERÊNCIA

void alteraValor(int *valor); // protótipo da função

int main(){
	setlocale(LC_ALL,"Portuguese");
	int valor = 10;
	
	printf("Valor antes da função: %d\n", valor);
	alteraValor(&valor); //colocar o & por estar passando por referência
	printf("Valor após a função: %d\n", valor); 
	
	return 0;
}

void alteraValor(int *valor){   // precisa do asterístico (*) Por ser passagem por referência.
	*valor = *valor * 2;
	
	printf("Valor dentro da função: %d\n", *valor);
}
