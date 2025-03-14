#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//exemplo com matriz

void imprime(int m[][4], int n){ //n diz respeito ao colchete da matriz omitido;
	int i, j;
	
	for(i = 0; i < n; i++){
		for(j = 0; j < 4; j++){
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int mat[3][4] = {{1,2,3,4},
	                {10,20,30,40},
	                {50,60,70,80}};
	                
	imprime(mat, 3); // tamanho da primeira dimensão;
					
					 
	
	
	
	return 0;
}
