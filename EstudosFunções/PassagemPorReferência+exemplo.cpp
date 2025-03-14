#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//PASSAGEM DE PARÂMETRO POR REFERÊNCIA:
  //-- É como se tiver passando o endereço da nossa variavel na memoria;
  //-- Tudo que altera dentro da função, vai refletir no nosso main;
  //-- Precisa do *
  
void alteraValor(int *valor);

int main(){
	setlocale(LC_ALL,"Portuguese");
	int valor = 10;
	
	printf("Valor antes da função: %d\n", valor);
	alteraValor(&valor); //tem q ter o &, pois é por referência;
	printf("Valor após a função: %d\n", valor);
	
	return 0;
}

void alteraValor(int *valor){
	*valor = *valor * 2;
	
	printf("Valor dentro da função: %d\n", *valor);
}
