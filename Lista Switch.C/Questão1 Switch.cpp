#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int numero;
	
	printf(" 1- Ver�o \n 2- Outono \n 3- Inverno \n 4- Primavera \n\n");
	
	printf(" Escolha uma das op��es acima: '1', '2', '3' ou '4' \n  ");
	scanf("%d", &numero);
	switch (numero){
		case 1:
			printf(" - O Ver�o � a esta��o mais quente do ano! \n\n ");
			break;
		case 2:
			printf(" - O Outono as folhas das �rvores caem! \n\n ");
			break;
		case 3:
			printf(" - O Inverno � a esta��o mais fria do ano! \n\n ");
			break;
		case 4:
			printf(" - A Primavera � a esta��o das flores! \n\n ");
			break;
		default :
			printf("N�MERO FORA DAS OP��ES");
	}
	
system("pause");
return(0);
}
