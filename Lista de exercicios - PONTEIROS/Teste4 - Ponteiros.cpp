#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int num, *p;
	
	num = 30;
	
	p = &num; //pega o endereço de num;
	printf("\nValor inicial: %d\n", num);
	
	*p = 50; //Muda o valor de num de uma maneira indireta;
	printf("\nValor final: %d\n", num);
	
	
	
	return 0;
}
