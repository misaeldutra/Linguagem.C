#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("CLASSIFICANDO CATEGORIAS DE NATAÇÃO! \n\n");
	
	printf("Digite a sua idade: \n");
	scanf("%d", &idade);
	
	switch(idade){
		case 5 ... 7:
			printf("\n Sua categoria é: Infantil A \n");
			break;
		case 8 ... 11:
			printf("\n Sua categoria é: Infantil B \n");
			break;
		case 12 ... 13:
			printf("\n Sua categoria é: Juvenil A \n");
			break;
		case 14 ... 17:
			printf("\n Sua categoria é: Juvenil B \n");
			break;
		case 18 ... 120:
			printf("\n Sua categoria é: Adulto \n");
			break;
		default:
			printf("\n SUA IDADE NÃO ESTÁ NAS CATEGORIAS! \n");
    }
	
	system("pause");
	return 0;
}
