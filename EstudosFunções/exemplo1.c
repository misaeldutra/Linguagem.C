#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float maiorvalor(float n1, float  n2){ //cópias do valor de x e y para dentro de n1 e n2, respectivamente;
 	if(n1 > n2){
 		return n1;
	 }else{
	 	return n2;
	 }
}


int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float x, y, m;
	
	printf("Informe um valor: ");
	scanf("%f", &x);
	
	printf("Informe mais um valor: ");
	scanf("%f", &y);
	
	m = maiorvalor(x,y); //chamada de função;
	
	printf("\nO maior valor = %.2f\n", m);
	
	
	
	return 0;
}
