#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num, spositivo = 0, snegativo = 0;
	
    printf("Informe uma lista de números inteiros: \n");
    printf("Digite '0' para encerrar! \n\n");
    
    while(1){
    	printf("Digite os números: \n");
    	scanf("%d", &num);
    	
    	if(num == 0){
    		break;
		}
		
		if(num > 0){
			spositivo = spositivo + num;
		} else{
			snegativo = snegativo + num;
		}
	}
	
	printf("A soma dos números positivos = %d\n", spositivo);
	printf("A soma dos números negativos = %d\n", snegativo);
	
	
	
	return 0;
}
