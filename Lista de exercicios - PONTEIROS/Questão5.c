#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void converteminutos (int mnts, int* h, int* m){
	*h = mnts / 60;
	*m = mnts % 60; // para fazer o cálculo dos minutos restantes; ou seja, resto da divisão;
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int mnts, h, m;
	
	printf("Informe o número em minutos: ");
	scanf("%d", &mnts);
	
	converteminutos(mnts, &h, &m);	
	
	printf("\n%d minutos = %d horas e %d minutos.\n ", mnts, h, m);
	
	return 0;
}
