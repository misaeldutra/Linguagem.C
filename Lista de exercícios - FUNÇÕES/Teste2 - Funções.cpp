#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

double quadrado(double a){ // fun��o
	 
	 return(a*a);
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	double numero, resultado;
	
	printf("Informe um n�mero: ");
	scanf("%e", &numero);
	
	resultado = quadrado(numero); // chamada da fun��o;
	
	printf("\nO quadrado desse n�mero � %e \n" , resultado);
	
	return 0;
}
