#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	
	printf(" 1- Ver�o \n 2- Outono \n 3- Inverno \n 4- Primavera \n\n");
	
	printf("Escolha e digite uma das op��es acima: '1', '2, '3' ou '4'  \n");
	scanf("%d", &num);
	
	switch(num){
		case 1:
			printf(" \n O Ver�o � a esta��o mais quente do ano! \n");
			break;
		case 2:
			printf(" \n O Outono as folhas da �rvores caem! \n");
			break;
		case 3:
			printf(" \n O Inverno � a esta��o mais fria do ano! \n ");
			break;
		case 4:
			printf(" \n A Primavera � a esta��o das flores! \n");
			break;
		default:
			printf(" \n N�MERO FORA DAS OP��ES! \n");
	    
	}
	
	
	return 0;
}
