#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float maior ( float x, float y);

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float x, y, m;
	
	printf("Informe um número: ");
	scanf("%f", &x);
	
	printf("Informe outro número: ");
	scanf("%f", &y);
	
	m = maior(x,y);
	
	printf("\nO maior número = %.1f", m);
	

	
	return 0;
}

float maior (float n1, float n2){
	if(n1 > n2){
		return n1;
	} else{
		return n2;
	}
}
