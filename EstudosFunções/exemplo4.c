#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int Square(int num){
	return num * num;
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n, resultado;
	
	printf("Informe o número: ");
	scanf("%d", &n);
	
	resultado = Square(n);
	
	printf("\nO quadrado do número informado = %d\n", resultado);
	
	return 0;
}
