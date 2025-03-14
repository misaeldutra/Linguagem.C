#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//exemplo com vetores

void imprime1(int v[], int n){ //primeira sintaxe
	int i;
	
	for(i = 0; i < n; i++){
		printf("%d", v[i]);
	}
}

void imprime2(int v[5]){ //segunda sintaxe
	int i;
	
	for(i = 0; i < 5; i++){
		printf("%d ", v[i] );
	}
}

void imprime3(int *v, int n){ //terceira sintaxe
	int i = 0;
	
	for(i = 0; i < n; i++){
		printf("%d ", v[i]);
	}
	
	
}



int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int vet[5] = {1,2,3,4,5};
	
	puts("Primeiro imprime: ");
	imprime1(vet, 5);
	
	puts("\nSegundo imprime: ");
	imprime2(vet);
	
	printf("\nTerceiro imprime: \n");
	imprime3(vet, 5);

	
	return 0;
}
