#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int vetor[20];
	int i, pares = 0;
	
	srand(time(NULL));
	
	printf("Números gerados: \n");
    for( i = 0; i < 20; i++){
    	vetor[i] = rand() % 10; // limite de casas decimais dos números gerados aleatóriamente;
    	printf("%d", vetor[i]);
    	
    	if(vetor[i] % 2 == 0){
    		pares++;
		}
	}
	
	printf("\n\nA quantidade de números pares que existem no vetor é %d números.\n", pares);

    
	
	
	
	return 0;
}
