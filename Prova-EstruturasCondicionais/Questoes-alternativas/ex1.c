#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2 ,n3, maior;
	
	printf("Digite o primeiro n�mero: \n");
	scanf("%d", &n1);
	printf("Digite o segundo n�mero: \n");
	scanf("%D", &n2);
	printf("Digite o terceiro n�mero: \n");
	scanf("%d", &n3);
	
	if(n1>n2 && n1>n3){
		maior = n1;
	}else{
		if(n2>n1 && n2>n3){
			maior = n2;
		}else{
			maior = n3;
		}
	}
	
	printf(" O maior N�mero digitado �: %d", maior);
	
	
	return 0;
}
