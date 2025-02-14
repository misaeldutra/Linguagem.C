#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Matrizes:
   // - Podem ter várias dimensões; ex: bidimensional; linha e coluna
   // - Dois ou mais índices para acesso de posições;
   // - <tipo> <nome>[<dim1>][<dim2>]...[<dimN>];

//Manipulação de Matriz:
   // - ACESSO A POSIÇÃO:
       // <nome> [<i1>][<i2>]...[<iN>]
   // - INICIALIZAÇÃO:
       // <declaração> = {{<l1>}, {<l2>},..., {<lN>}};

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	//ex: já inicializando a matriz;
	
	int matriz[3][3];
	
	matriz[0][0] = 1;
	matriz[0][1] = 2;
	matriz[0][2] = 3;
	
	matriz[1][0] = 4;
	matriz[1][1] = 5;
	matriz[1][2] = 6;
	
	matriz[2][0] = 7;
	matriz[2][1] = 8;
	matriz[2][2] = 9;
	
	printf("Imprimindo a primeira linha:\n");
	printf("%d %d %d\n", matriz[0][0], matriz[0][1], matriz[0][2]);
	
	
	

	return 0;
}
