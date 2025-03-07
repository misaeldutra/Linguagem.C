#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma (int n){
	
	if(n == 1){
		return 1;
	}else{
		return ( n + soma(n - 1));
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n;
	
	printf("Informe um inteiro positivo: ");
	scanf("%d", &n);
	
	printf("A soma = %d\n", soma (n));
	
	
	return 0;
}
