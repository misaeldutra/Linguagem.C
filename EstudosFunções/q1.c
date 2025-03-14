#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int verificartriangulo(float x, float y, float z){
	if(x+y > z && y+z > x && x+z > y){
		return 1;
	}else{
		return 0;
	}
}

void tipotriangulo(float x, float y, float z){
	if(x == y && y == z){
		printf("Equil�tero");
	} else if(x == y || y == z || x == z){
		printf("Is�sceles");
	} else{
		printf("Escaleno");
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	float x,y,z;
	
	printf("Informe um valor: ");
	scanf("%f", &x);
	printf("Informe outro valor: ");
	scanf("%f", &y);
	printf("Informe mais um valor: ");
	scanf("%f", &z);
	
	if(verificartriangulo(x,y,z)){
		printf("\nOs valores informados formam um tri�ngulo!\n");
		printf("O tri�ngulo formado � ");
		tipotriangulo(x,y,z);
   }else{
   	printf("\nOs valores informados n�o formam um tri�ngulo!!\n");
   }
	
	
	
	
	return 0;
}
