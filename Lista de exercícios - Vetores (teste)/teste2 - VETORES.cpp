#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int v[5] = {5, 10, 15, 20, 25};
	int i; // indice para controlar posições;
	float soma = 0;
	
	for(int i = 0; i < 5; i++){
		soma = soma + v[i];
	}
	
	printf("Resultado: %f\n", soma/5);
	
	
	
	return 0;
}
