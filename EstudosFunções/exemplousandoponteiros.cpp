#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//exemplo usando a passagem por referência e já usando Ponteiros;

void Swap (int *a, int *b);

int main (void){
	int n1, n2;
	
	n1 = 100;
	n2 = 200;
	
	Swap(&n1, &n2);
	
	printf("\n\nEles agora valem %d %d\n", n1 , n2);
}

void Swap (int *a, int *b){
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}
