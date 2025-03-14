#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void display(int var, int *ptr);

void update(int *p);

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int var = 15;
	int *ptr;
	
	ptr = &var; // utilizar ponteiro para apontar para esse endere�o que criamos; atribui ptr ao endere�o da variavel;
	
	display(var, ptr);
	
	
	update(&var);//
	
	
	display(var, ptr);
	
	return 0;
}

void display(int var, int *ptr){
	printf("O conte�do de var = %d\n", var);
	
	printf("O endere�o de var = %p\n", &var); // valor em hexadecimal.
	
	printf("\nConte�do apontado por ptr = %d\n", *ptr); // ou seja, 15
	
	printf("Endere�o apontado por ptr = %p\n", ptr); //pr�prio endere�o de var;
	
	printf("\nEndere�o do ptr =         %p\n", &ptr); //endere�o do ponteiro;
}

void update(int *p){
	*p = *p + 1;
}
