#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//PASSAGEM DE PAR�METRO POR REFER�NCIA:
  //-- � como se tiver passando o endere�o da nossa variavel na memoria;
  //-- Tudo que altera dentro da fun��o, vai refletir no nosso main;
  //-- Precisa do *
  
void alteraValor(int *valor);

int main(){
	setlocale(LC_ALL,"Portuguese");
	int valor = 10;
	
	printf("Valor antes da fun��o: %d\n", valor);
	alteraValor(&valor); //tem q ter o &, pois � por refer�ncia;
	printf("Valor ap�s a fun��o: %d\n", valor);
	
	return 0;
}

void alteraValor(int *valor){
	*valor = *valor * 2;
	
	printf("Valor dentro da fun��o: %d\n", *valor);
}
