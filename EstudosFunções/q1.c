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
		printf("Equilátero");
	} else if(x == y || y == z || x == z){
		printf("Isósceles");
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
		printf("\nOs valores informados formam um triângulo!\n");
		printf("O triângulo formado é ");
		tipotriangulo(x,y,z);
   }else{
   	printf("\nOs valores informados não formam um triângulo!!\n");
   }
	
	
	
	
	return 0;
}
