#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int K[15];
	int i;
	
	printf("Informe 15 n�meros para o vetor K: \n\n");
	for(i = 0; i < 15; i++){
		printf("Informe o %d n�mero: ", i + 1);
		scanf("%d", &K[i]);
	}
	
	
	
	return 0;
}
