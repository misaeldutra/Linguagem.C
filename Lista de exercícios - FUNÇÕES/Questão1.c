#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int verificadortriangulo (float x, float y, float z){ //função para verificar se é um triângulo;
	
	if(x + y > z && y + z > x && x + z > y){
		return 1;
	} else{
		return 0;
	}
}

void tipodotriangulo (float x, float y, float z){ // função para verificar qual o tipo do triângulo;
	
	if(x == y && y == z ){
		printf("Equilátero");
	} else if(x == y || y == z || x == z){
		printf("Isóceles");
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
		printf("\nOs valores informados formam um triângulo!\n");
		printf("O triângulo formado é ");
		tipodotriangulo(x,y,z);
	} else{
		printf("\nOs valores informados não formam um triângulo! \n");
	}
	
	
}
