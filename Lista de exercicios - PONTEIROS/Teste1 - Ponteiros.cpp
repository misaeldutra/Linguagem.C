#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//PONTEIROS
  // - Apontador para um endereço de memória;
  // - atualizar conteúdos desses endereços de forma indireta;
  
// *ptr : O apontado por;  conteúdo do endereço da variável que ptr aponta.

// ptr : O endereço da variável. Local onde a varoável está armazenada;

// &ptr : O endereço do ponteiro;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int var = 15;
	int *ptr; // declaração de ponteiro;
	
	ptr = &var;
	
	printf("Conteúdo de var = %d\n", var);
	printf("Endereço de var = %p\n", &var);
	
	printf("Conteúdo apontado por ptr = %d\n", *ptr);
	printf("Endereço apontado por ptr = %p\n", ptr);
	
	printf("Endereço do ptr       = %p\n", &ptr);
	
	*ptr = 73; // conteudo da variavel apontado pelo ponteiro vai receber 73; para atualizar o conteudo do endereço onde var esta
	
	printf("\n\n");
	printf("Conteúdo de var = %d\n", var);
	printf("Endereço de var = %p\n", &var);
	
	printf("Conteúdo apontado por ptr = %d\n", *ptr);
	printf("Endereço apontado por ptr = %p\n", ptr);
	
	printf("Endereço do ptr       = %p\n", &ptr);
	
	
	
	
	return 0;
}
