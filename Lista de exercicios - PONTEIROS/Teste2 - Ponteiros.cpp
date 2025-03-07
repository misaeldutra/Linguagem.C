#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void display(int var, int *ptr);

void update(int *p);

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int var = 15;
	int *ptr; // declara��o de ponteiro;
	
	ptr = &var;
	
	display(var,ptr);
	
	update(&var);
	
	display(var,ptr);
	
	return 0;
}

void display(int var, int *ptr){
	printf("\n\n");
	printf("Conte�do de var = %d\n", var);
	printf("Endere�o de var = %p\n", &var);
	
	printf("Conte�do apontado por ptr = %d\n", *ptr);
	printf("Endere�o apontado por ptr = %p\n", ptr);
	
	printf("Endere�o do ptr       = %p\n", &ptr);
}

void update(int *p){
	*p = *p + 1;
}
