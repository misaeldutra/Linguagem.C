#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h> // biblioteca de tempo;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[20];
	int i, pares = 0;
	
	srand(time(NULL)); // funcão para números aleatórios; para não gerar números aleatorios iguais;
	
	printf("Números gerados = ");
	for(i = 0; i < 20; i++){
		vetor[i] = rand() % 10; //o limite é numeros entre 0 e 9; //rand = função para números aleatórios
		printf("%d", vetor[i]);
		
		if(vetor[i] % 2 == 0){
			pares++;
		}
	}
	
	for(i = 0; i<20; i++){
		printf("%d", vetor[i]);
	}
	
	printf("\n\nA quantidade de números pares que existem no vetor é = %d números.\n\n", pares);
	
	system("pause");
	return 0;
}
