#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//PASSAGEM DE PARÂMETRO POR VALOR:
     //-- 

void alteraValor(int valor);

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int valor = 10;
	
	printf("Valor antes da função: %d\n", valor);
	alteraValor(valor);
	printf("\nValor após a função: %d\n", valor);

	
	return 0;
}

void alteraValor( int valor){ //tudo q fizer com a variável aq dentro não vai representar no main;
	valor = valor*2;
	
	printf("Valor dentro da função: %d\n", valor); // vai alterar aq dentro, mas no main não sofre as alterações; não reflete no main;
	
}
