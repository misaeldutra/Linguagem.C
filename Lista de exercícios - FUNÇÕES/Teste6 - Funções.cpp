#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//PASSAGEM DE PAR�METRO POR VALOR

void alteraValor(int valor); // prot�tipo da fun��o

int main(){
	setlocale(LC_ALL,"Portuguese");
	int valor = 10;
	
	printf("Valor antes da fun��o: %d\n", valor);
	alteraValor(valor);
	printf("Valor ap�s a fun��o: %d\n", valor); //Observe que o valor dentro do main n�o sofreu as altera��es, por ser passagem por par�metro por valor
	
	return 0;
}

void alteraValor(int valor){
	valor = valor * 2;
	
	printf("Valor dentro da fun��o: %d\n", valor);
}
