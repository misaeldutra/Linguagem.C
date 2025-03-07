#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Escreva um método que receba um vetor V com 10 inteiros armazenados. O método deve alterar o vetor V  com o valor de cada posição multiplicado por 2. Os valores devem ser acessiveis fora do método, especificamente no main

void alteraValor(int *ptr, int tam) {
	int i;
	
	for ( i = 0; i < tam; i++){
		*(ptr + i) *= 2; //para que o valor de cada elemento do vetor seja multiplicado por 2.
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int V[10]; //vetor;
	int i;
	
	printf("Informes 10 números inteiros: \n");
	for(i = 0; i < 10; i++){
		scanf("%d", &V[i]);
	}
	
	alteraValor(V, 10); //chamada de função;
	
	printf("\nVetor após alterar valor multiplicando por 2: ");
	for(i = 0; i < 10; i++){
		printf("\n%d", V[i]); // v + 1 pra acessar a posição do um em diante do vetor
	}
	printf("\n");
	
	return 0;
}


