#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

double quadrado(double a){
	
	return a*a;
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	double num, resultado;
	
	printf("Informe o n�mero: ");
	scanf("%lf", &num);
	
	resultado = quadrado(num); //chamada da fun��o
	
    printf("\nO quadrado do n�mero informado � %.1f\n", resultado); 
		
	return 0;
}
