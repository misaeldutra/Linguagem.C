#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int num;
	
	printf("Digite um valor: \n");
	scanf("%d", &num);
	
	if(num > 10){
		printf("É MAIOR QUE 10!\n");
	} else{
		printf("NÃO É MAIOR QUE 10!\n");
	}
	
	
	
	
	return 0;
}
