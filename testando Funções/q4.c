#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void binario(int n){
	if(n == 0){
		printf("%d", n); // imprimir o 0;
	}else{
		binario(n/2);
		printf("%d", n % 2); // seria o resto da divis�o;
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num;
	
	printf("Informe um n�mero em decimal: ");
	scanf("%d", &num);
	
	binario(num);

	
	return 0;
}
