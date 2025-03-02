#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//PARÂMETRO DE FUNÇÕES DISTINTAS
 //Sintaxe para parâmetro struct:
   // <tipo> <função>(<tipo_struct> <param>) {..}
   
 //Sintaxe para vetores/matrizes como parâmetro:
   // <tipo> <função> (<tipo> <vet>[], int tam) {...}
     // <tipo> <função>(<tipo> <vet>[<tam>]) {...}
    // <tipo> <função> (<tipo> *<vet>, int tam) {...}
   // <tipo> <função> (<tipo m[] [<tam2>], int tam1) {...}
   
//exemplo por parâmetro de vetores:
   
   
void imprime1(int v[], int n){ //primeira forma
	int i;
	for (i=0; i < n; i++){
		printf("%d ", v[i]);
	}
}

void imprime2 (int v[5]){ //segunda forma
	int i;
	for (i=0; i < 5; i++){
		printf("%d ", v[i]);
	}
}

void imprime3 (int *v, int n){ //terceira forma
	int i;
	for (i=0; i < n; i++){
		printf("%d ", v[i]);
	}
}


int main(){
	int vet[5] = {1,2,3,4,5};
	
	puts("Primeiro imprime: ");
	imprime1(vet, 5);
	
	puts("\nSegundo imprime: ");
	imprime2(vet);
	
	puts("\nTerceiro imprime: ");
	imprime3(vet, 5);
}
