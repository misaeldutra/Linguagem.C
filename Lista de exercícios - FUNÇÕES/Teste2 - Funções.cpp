#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

double quadrado(double a){ // função
	 
	 return(a*a);
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	double numero, resultado;
	
	printf("Informe um número: ");
	scanf("%e", &numero);
	
	resultado = quadrado(numero); // chamada da função;
	
	printf("\nO quadrado desse número é %e \n" , resultado);
	
	return 0;
}
