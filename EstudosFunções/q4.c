#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void binario(int num){
	if(num == 0){
		printf("%d", num);
	}else{
		binario(num/2);
		printf("%d", num % 2);
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n;
	
	printf("Informe o número em decimal: ");
	scanf("%d", &n);
	
	binario(n);
	
	return 0;
}
