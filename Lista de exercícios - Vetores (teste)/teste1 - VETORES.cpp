#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Vetores
	// Temos um �ndice �nico para controlar as posi��es;
	//<tipo> <nome>[<tamanho>];
	// a primeira posi��o do vetor esta no �ndice 0;
	// N�o consegue acessar o vetor todo de uma vez, devemos manipular posi��o por posi��o;
	  // ex <nome>[<indice>];
	  
	// Podemos preencher o vetor todo de uma vez, pela lista de inicializa��o; porem, s� no inicio, preenchendo todo o vetor logo de in�cio;
	  // ex <tipo> <nome>[<tam.>] = {<v1>, <v2>, ..., <vN>}

int main(){
	setlocale(LC_ALL,"Portuguese");
	//ex
	// calcular a m�dia
	
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
