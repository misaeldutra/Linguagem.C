#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void converterminutos(int mins, int *h, int *m){
	*h = mins/60;
	*m = mins % 60; // resto em minutos;
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int mins, h, m;
	
	printf("Informe o número de minutos: ");
	scanf("%d", &mins);
	
	converterminutos (mins, &h, &m);
	
	printf("\n%d minutos = %d horas e %d minutos.\n", mins, h, m );
	
	
	
	return 0;
}
