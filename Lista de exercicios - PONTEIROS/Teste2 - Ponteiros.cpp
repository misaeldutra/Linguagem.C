#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void display(int var, int *ptr);

void update(int *p);

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int var = 15;
	int *ptr; // declaração de ponteiro;
	
	ptr = &var;
	
	display(var,ptr);
	
	update(&var);
	
	display(var,ptr);
	
	return 0;
}

void display(int var, int *ptr){
	printf("\n\n");
	printf("Conteúdo de var = %d\n", var);
	printf("Endereço de var = %p\n", &var);
	
	printf("Conteúdo apontado por ptr = %d\n", *ptr);
	printf("Endereço apontado por ptr = %p\n", ptr);
	
	printf("Endereço do ptr       = %p\n", &ptr);
}

void update(int *p){
	*p = *p + 1;
}
