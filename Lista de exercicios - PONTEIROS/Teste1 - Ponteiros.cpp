#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//PONTEIROS
  // - Apontador para um endere�o de mem�ria;
  // - atualizar conte�dos desses endere�os de forma indireta;
  
// *ptr : O apontado por;  conte�do do endere�o da vari�vel que ptr aponta.

// ptr : O endere�o da vari�vel. Local onde a varo�vel est� armazenada;

// &ptr : O endere�o do ponteiro;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int var = 15;
	int *ptr; // declara��o de ponteiro;
	
	ptr = &var;
	
	printf("Conte�do de var = %d\n", var);
	printf("Endere�o de var = %p\n", &var);
	
	printf("Conte�do apontado por ptr = %d\n", *ptr);
	printf("Endere�o apontado por ptr = %p\n", ptr);
	
	printf("Endere�o do ptr       = %p\n", &ptr);
	
	*ptr = 73; // conteudo da variavel apontado pelo ponteiro vai receber 73; para atualizar o conteudo do endere�o onde var esta
	
	printf("\n\n");
	printf("Conte�do de var = %d\n", var);
	printf("Endere�o de var = %p\n", &var);
	
	printf("Conte�do apontado por ptr = %d\n", *ptr);
	printf("Endere�o apontado por ptr = %p\n", ptr);
	
	printf("Endere�o do ptr       = %p\n", &ptr);
	
	
	
	
	return 0;
}
