#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void display(int var, int *ptr);

void update(int *p);

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int var = 15;
	int *ptr;
	
	ptr = &var; // utilizar ponteiro para apontar para esse endereço que criamos; atribui ptr ao endereço da variavel;
	
	display(var, ptr);
	
	
	update(&var);//
	
	
	display(var, ptr);
	
	return 0;
}

void display(int var, int *ptr){
	printf("O conteúdo de var = %d\n", var);
	
	printf("O endereço de var = %p\n", &var); // valor em hexadecimal.
	
	printf("\nConteúdo apontado por ptr = %d\n", *ptr); // ou seja, 15
	
	printf("Endereço apontado por ptr = %p\n", ptr); //próprio endereço de var;
	
	printf("\nEndereço do ptr =         %p\n", &ptr); //endereço do ponteiro;
}

void update(int *p){
	*p = *p + 1;
}
