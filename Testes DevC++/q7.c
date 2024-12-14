#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("NÃO SERÃO LIDOS VALORESA IGUAIS! \n\n");
	int n1, n2, n3;
	int maior, maior2, menor;
	
	printf("Informe o primeiro número: \n");
	scanf("%d", &n1);
	printf("Informe o segundo número: \n");
	scanf("%d", &n2);
	printf("Informe o terceiro número: \n");
	scanf("%d", &n3);
	
	if (n1==n2 && n2==n3 && n3==n1){
		printf("NÃO SERÃO LIDOS VALORES IGUAIS! \n");
	}
	while (n1==n2 || n1 == n3 || n2 == n3);
		
	
	if(n1>n2 && n2> n3){
		maior = n1;
		if(n2>n3){
			maior2 = n2;
			menor = n3;
		}else{
			maior2 = n3;
			menor = n2;
		}
	} else if(n2>n1 && n2>n3){
		maior = n2;
		if(n1>n3){
			maior2 = n1;
			menor = n3;
		}else{
			maior2 = n3;
			menor = n1;
		}
	}else{
		maior = n3;
		if(n1>n2){
			maior2 = n1;
			menor = n2;
		}else{
			maior2 = n2;
			menor = n1;
		}
	
	}

	
	int soma = maior + maior2;
	printf("A soma dos 2 maiores números = %d.", soma);
	
}
