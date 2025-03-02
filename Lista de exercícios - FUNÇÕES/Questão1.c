#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int verificadortriangulo (float x, float y, float z){ //fun��o para verificar se � um tri�ngulo;
	
	if(x + y > z && y + z > x && x + z > y){
		return 1;
	} else{
		return 0;
	}
}

void tipodotriangulo (float x, float y, float z){ // fun��o para verificar qual o tipo do tri�ngulo;
	
	if(x == y && y == z ){
		printf("Equil�tero");
	} else if(x == y || y == z || x == z){
		printf("Is�celes");
	} else{
		printf("Escaleno");
	}
}


int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float x, y, z;
	
	printf("Informe o valor: \n");
	scanf("%f", &x);
	
	printf("Informe outro valor: \n");
	scanf("%f", &y);
	
	printf("Informe mais um valor: \n");
	scanf("%f", &z);
	
	if(verificadortriangulo(x,y,z)) {
		printf("\nOs valores informados formam um tri�ngulo!\n");
		printf("O tri�ngulo formado � ");
		tipodotriangulo(x,y,z);
	} else{
		printf("\nOs valores informados n�o formam um tri�ngulo! \n");
	}
	
	
}
