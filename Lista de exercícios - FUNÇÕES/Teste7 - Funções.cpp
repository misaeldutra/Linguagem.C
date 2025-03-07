#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//PASSAGEM DE PAR�METRO POR REFER�NCIA

void alteraValor(int *valor); // prot�tipo da fun��o

int main(){
	setlocale(LC_ALL,"Portuguese");
	int valor = 10;
	
	printf("Valor antes da fun��o: %d\n", valor);
	alteraValor(&valor); //colocar o & por estar passando por refer�ncia
	printf("Valor ap�s a fun��o: %d\n", valor); 
	
	return 0;
}

void alteraValor(int *valor){   // precisa do aster�stico (*) Por ser passagem por refer�ncia.
	*valor = *valor * 2;
	
	printf("Valor dentro da fun��o: %d\n", *valor);
}
