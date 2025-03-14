#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//PONTEIROS:
  //- Apontador para um endere�o de mem�ria.
  //- Podemos atualizar conteudos de tais endere�os de forma indireta;
     // *ptr = "o apontado por". O conte�do do endere�o da variavel que ptr aponta;
     // ptr = O endere�o da vari�vel;
     //&ptr = O endere�o do ponteiro;
  

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int var = 15;
	int *ptr;
	
	ptr = &var; // utilizar ponteiro para apontar para esse endere�o que criamos; atribui ptr ao endere�o da variavel;
	
	printf("O conte�do de var = %d\n", var);
	
	printf("O endere�o de var = %p\n", &var); // valor em hexadecimal.
	
	printf("\nConte�do apontado por ptr = %d\n", *ptr); // ou seja, 15
	
	printf("Endere�o apontado por ptr = %p\n", ptr); //pr�prio endere�o de var;
	
	printf("\nEndere�o do ptr =         %p\n\n", &ptr); //endere�o do ponteiro;
	
	
	*ptr = 73; //Usando ponteiro para atualizar o conteudo do endere�o onde var esta; Ou seja, o conteudo de var = 73;
	
	
	
	printf("O conte�do de var = %d\n", var);
	
	printf("O endere�o de var = %p\n", &var); // valor em hexadecimal.
	
	printf("\nConte�do apontado por ptr = %d\n", *ptr); // ou seja, 15
	
	printf("Endere�o apontado por ptr = %p\n", ptr); //pr�prio endere�o de var;
	
	printf("\nEndere�o do ptr =         %p\n", &ptr); //endere�o do ponteiro;
	
	
	
	
	return 0;
}
