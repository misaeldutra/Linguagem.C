#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//PASSAGEM DE PAR�METRO POR VALOR:
     //-- 

void alteraValor(int valor);

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int valor = 10;
	
	printf("Valor antes da fun��o: %d\n", valor);
	alteraValor(valor);
	printf("\nValor ap�s a fun��o: %d\n", valor);

	
	return 0;
}

void alteraValor( int valor){ //tudo q fizer com a vari�vel aq dentro n�o vai representar no main;
	valor = valor*2;
	
	printf("Valor dentro da fun��o: %d\n", valor); // vai alterar aq dentro, mas no main n�o sofre as altera��es; n�o reflete no main;
	
}
