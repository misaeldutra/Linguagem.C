#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void converterminutos(int mnts, int *h, int *m){
	*h = mnts / 60;
	*m = mnts % 60;
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int mnts, h, m;
	
	printf("Informe o número de minutos: ");
	scanf("%d", &mnts);
	
	converterminutos(mnts, &h, &m);
	
	printf("\n%d minutos = %d horas e %d minutos.\n", mnts, h, m);
	
	
	
	
	return 0;
}
