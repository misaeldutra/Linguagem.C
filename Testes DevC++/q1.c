#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	
	printf("Digite um n�mero: \n");
	scanf("%d", &num);
	
	if(num>10){
		printf("O n�mero digitado � MAIOR QUE 10! \n");
	} else{
		printf("O n�mero digitado N�O � MAIOR QUE 10! \n");
	}
	
	return 0;
}
