#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//escreva um método que receba um vetor de inteiros e disponibilize o maior e o menor elemento.
// Observe que o metodo deve disponibilizar ao local de chamada os dois valores ( não imprimir ao usuário)
// Portanto, você precisará usar a passagem por referência, já que os métodos só podem retornar um único valor;

void MaiorMenor(int *v, int tam, int *maior, int *menor){
	int i;
	
	*maior = v[0];
    *menor = v[0];
	
	
	for(i = 0; i < tam; i++){
		if(v[i] > *maior){
			*maior = v[i];
		}
		if(v[i] < *menor){
			*menor = v[i];
		}
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int v[10];
	int menor, maior;
	int i;
	
	printf("Informe 10 números inteiros: \n");
	for(i = 0; i < 10; i++){
		scanf("%d", &v[i]);
	}
	
	MaiorMenor(v, 10, &maior, &menor);
	
	printf("\nO maior elemento: %d\n", maior);
	
	printf("\nO menor elemento: %d\n", menor);
	
	
	return 0;
}
