#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int vetor[20];
	int i, pares = 0;
	
	srand(time(NULL));
	
	printf("N�meros gerados: \n");
    for( i = 0; i < 20; i++){
    	vetor[i] = rand() % 10; // limite de casas decimais dos n�meros gerados aleat�riamente;
    	printf("%d", vetor[i]);
    	
    	if(vetor[i] % 2 == 0){
    		pares++;
		}
	}
	
	printf("\n\nA quantidade de n�meros pares que existem no vetor � %d n�meros.\n", pares);

    
	
	
	
	return 0;
}
