#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Vetores
	// Temos um índice único para controlar as posições;
	//<tipo> <nome>[<tamanho>];
	// a primeira posição do vetor esta no índice 0;
	// Não consegue acessar o vetor todo de uma vez, devemos manipular posição por posição;
	  // ex <nome>[<indice>];
	  
	// Podemos preencher o vetor todo de uma vez, pela lista de inicialização; porem, só no inicio, preenchendo todo o vetor logo de início;
	  // ex <tipo> <nome>[<tam.>] = {<v1>, <v2>, ..., <vN>}

int main(){
	setlocale(LC_ALL,"Portuguese");
	//ex
	// calcular a média
	
	int v[5];
	float m;
	
	v[0] = 25;
	v[1] = 20;
	v[2] = 15;
	v[3] = 10;
	v[4] = 5;
	
	m = (v[0] + v[1] + v[2] + v[3] + v[4] )/ 5;
	
	printf("Resultado: %f\n", m);
	
	
	
	return 0;
}
