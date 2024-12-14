#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL, "Portuguese");
int dia;

printf("Digite um número entre 1 e 7: \n ");
scanf("%d", &dia);

switch(dia){
	case 1:
		printf(" DOMINGO! \n");
		break;
	case 2:
		printf(" SEGUNDA-FEIRA! \n");
		break;
	case 3:
		printf(" TERÇAIFEIRA! \n");
		break;
	case 4:
		printf(" QUARTA-FEIRA! \n");
		break;
	case 5:
		printf(" QUINTA-FEIRA! \n");
		break;
	case 6:
		printf(" SEXTA-FEIRA! \n");
		break;
	case 7:
		printf(" SÁBADO! \n");
		break;
	default:
		printf(" DIA INVÁLIDO! \n");
}
return 0;
}
