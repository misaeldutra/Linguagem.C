#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Passagem por par�metro;

int alteraValor(int valor);

int main(){
	setlocale(LC_ALL,"Portuguese");
	int valor = 100;
	
	printf("Valor antes da fun��o: %d\n", valor);
	alteraValor(valor);
	printf("Valor depois da fun��o: %d\n", valor);
	
	
	return 0;
}

int alteraValor(int valor){
	valor = valor*2;
	
	printf("Valor dentro da fun��o: %d\n", valor);
}
