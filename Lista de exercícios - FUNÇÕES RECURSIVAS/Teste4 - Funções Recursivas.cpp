#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int exponencial ( int base, int expoente){
	
	if(expoente == 0){
		return 1; // caso seja um n�mero elevado a 0, sempre dar� 1;
	}
	if(expoente == 1){
		return base; // pois todo n�mero elevado a 1 � ele mesmo;
	}
	return (base * exponencial(base, expoente - 1));
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int x, y, exp;
	
	printf("Informe um valor inteiro positivo de base: ");
	scanf("%d", &x);
	
	printf("Informe um valor inteiro positivo de expoente: ");
	scanf("%d", &y);
	
	if(y < 0){
		printf("\nO expoente n�o pode ser negativo! Tem que ser postivo!\n");
	} else{
		exp = exponencial(x, y);
	}
	
	printf("\nO valor de %d elevado � %d = %d.\n", x, y, exp);
	
	
	return 0;
}
