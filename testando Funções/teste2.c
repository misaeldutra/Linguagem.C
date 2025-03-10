#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

double quadrado(double a){
	
	return a*a;
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	double num, resultado;
	
	printf("Informe o número: ");
	scanf("%lf", &num);
	
	resultado = quadrado(num); //chamada da função
	
    printf("\nO quadrado do número informado é %.1f\n", resultado); 
		
	return 0;
}
