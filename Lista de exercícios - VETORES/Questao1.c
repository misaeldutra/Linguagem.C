#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h> // biblioteca de tempo;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[20];
	int i, pares = 0;
	
	srand(time(NULL)); // func�o para n�meros aleat�rios; para n�o gerar n�meros aleatorios iguais;
	
	printf("N�meros gerados = ");
	for(i = 0; i < 20; i++){
		vetor[i] = rand() % 10; //o limite � numeros entre 0 e 9; //rand = fun��o para n�meros aleat�rios
		printf("%d", vetor[i]);
		
		if(vetor[i] % 2 == 0){
			pares++;
		}
	}
	
	for(i = 0; i<20; i++){
		printf("%d", vetor[i]);
	}
	
	printf("\n\nA quantidade de n�meros pares que existem no vetor � = %d n�meros.\n\n", pares);
	
	system("pause");
	return 0;
}
