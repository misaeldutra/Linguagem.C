#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	
	printf("Digite um número: \n");
	scanf("%d", &num);
	
	if(num>10){
		printf("O número digitado É MAIOR QUE 10! \n");
	} else{
		printf("O número digitado NÃO É MAIOR QUE 10! \n");
	}
	
	return 0;
}
