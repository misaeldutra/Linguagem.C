#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int numero;
	
	printf(" 1- Verão \n 2- Outono \n 3- Inverno \n 4- Primavera \n\n");
	
	printf(" Escolha uma das opções acima: '1', '2', '3' ou '4' \n  ");
	scanf("%d", &numero);
	switch (numero){
		case 1:
			printf(" - O Verão é a estação mais quente do ano! \n\n ");
			break;
		case 2:
			printf(" - O Outono as folhas das árvores caem! \n\n ");
			break;
		case 3:
			printf(" - O Inverno é a estação mais fria do ano! \n\n ");
			break;
		case 4:
			printf(" - A Primavera é a estação das flores! \n\n ");
			break;
		default :
			printf("NÚMERO FORA DAS OPÇÕES");
	}
	
system("pause");
return(0);
}
