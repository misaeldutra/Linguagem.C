#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	
	printf(" 1- Verão \n 2- Outono \n 3- Inverno \n 4- Primavera \n\n");
	
	printf("Escolha e digite uma das opções acima: '1', '2, '3' ou '4'  \n");
	scanf("%d", &num);
	
	switch(num){
		case 1:
			printf(" \n O Verão é a estação mais quente do ano! \n");
			break;
		case 2:
			printf(" \n O Outono as folhas da árvores caem! \n");
			break;
		case 3:
			printf(" \n O Inverno é a estação mais fria do ano! \n ");
			break;
		case 4:
			printf(" \n A Primavera é a estação das flores! \n");
			break;
		default:
			printf(" \n NÚMERO FORA DAS OPÇÕES! \n");
	    
	}
	
	
	return 0;
}
