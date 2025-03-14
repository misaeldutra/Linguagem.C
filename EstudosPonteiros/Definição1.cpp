#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//PONTEIROS:
  //- Apontador para um endereço de memória.
  //- Podemos atualizar conteudos de tais endereços de forma indireta;
     // *ptr = "o apontado por". O conteúdo do endereço da variavel que ptr aponta;
     // ptr = O endereço da variável;
     //&ptr = O endereço do ponteiro;
  

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int var = 15;
	int *ptr;
	
	ptr = &var; // utilizar ponteiro para apontar para esse endereço que criamos; atribui ptr ao endereço da variavel;
	
	printf("O conteúdo de var = %d\n", var);
	
	printf("O endereço de var = %p\n", &var); // valor em hexadecimal.
	
	printf("\nConteúdo apontado por ptr = %d\n", *ptr); // ou seja, 15
	
	printf("Endereço apontado por ptr = %p\n", ptr); //próprio endereço de var;
	
	printf("\nEndereço do ptr =         %p\n\n", &ptr); //endereço do ponteiro;
	
	
	*ptr = 73; //Usando ponteiro para atualizar o conteudo do endereço onde var esta; Ou seja, o conteudo de var = 73;
	
	
	
	printf("O conteúdo de var = %d\n", var);
	
	printf("O endereço de var = %p\n", &var); // valor em hexadecimal.
	
	printf("\nConteúdo apontado por ptr = %d\n", *ptr); // ou seja, 15
	
	printf("Endereço apontado por ptr = %p\n", ptr); //próprio endereço de var;
	
	printf("\nEndereço do ptr =         %p\n", &ptr); //endereço do ponteiro;
	
	
	
	
	return 0;
}
