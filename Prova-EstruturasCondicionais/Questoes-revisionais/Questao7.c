#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("NÃO PODEM SER INFORMADOS VALORES IGUAIS! \n\n");
	
	int N1, N2, N3;
	
	printf("Digite o primeiro número: \n");
	scanf("%d", &N1);
	
	printf("Digite o segundo número: \n");
	scanf("%d", &N2);
	
	printf("Digite o terceiro número: \n");
	scanf("%d", &N3);
	
	int nmaior, nmaior2, nmenor;
	
	if(N1>N2 && N2 > N3){
		nmaior = N1;
		if(N2 > N3){
			nmaior2 = N2;
		    nmenor = N3;
		} else {
			nmaior2 = N3;
			nmenor = N2;
		}	
	} else if(N2 > N1 && N2 > N3 ){
		nmaior = N2;
		if(N1 > N3){
			nmaior2 = N1;
			nmenor = N3;
		}else{
			nmaior2 = N3;
		    nmenor = N1;
		}
	} else {
	    nmaior = N3;
		if(N1> N2){
		    nmaior2 = N1;
			nmenor = N2;
		}else {
			nmaior2 = N2;
			nmenor = N1;
		}
	}
	
	int soma = nmaior + nmaior2;
	
	printf("A soma dos 2 maiores números = %d", soma);
	
	
	
	return 0;
}
