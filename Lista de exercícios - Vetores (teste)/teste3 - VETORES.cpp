#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int v[5];
	int i;
	
	for(int i = 0; i < 7; i++){
		printf("Informe um dado:\n");
		scanf("%d", &v[i]);
	}
	
	printf("Dados informados:\n");
	for(int i = 0; i < 7; i++){
		printf("\n%d", v[i]);
	}
	
	
	
	return 0;
}
