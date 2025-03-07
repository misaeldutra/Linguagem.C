#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fatorial (int n){
	
	if(n > 1){
		return n * fatorial(n - 1); //Chamada Recursiva;
	}else{
		return 1;
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int num, fat;
	
	fat = 1;
	
	printf("Informe um número: ");
	scanf("%d", &num);
	
	printf("\nO fatorial de %d é %d\n", num, fatorial(num));
	
	return 0;
}
