#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
		float num1, num2, resultado;
		int opc;
		
		do{
			printf("\n --- Menu de Opera��es ---\n"); // Para apresentar para o usu�rio as possibilidades de escolhas no menu!
			printf("  1. Adi��o\n");
			printf("  2. Subtra��o\n");
			printf("  3. Multiplica��o\n");
			printf("  4. Divis�o\n");
			printf("  5. Sair do Programa\n\n");
			
			
			printf("Escolha uma das op��es acima: ");
			scanf("%d", &opc);
			
			if(opc >= 1 && opc <= 4){
				printf("Informe o primeiro n�mero: ");
				scanf("%f", &num1);
				printf("Informe o segundo n�mero: ");
				scanf("%f", &num2);
			} else if(opc == 4 && num2 == 0){
				printf("N�o � permitido Divis�o por zero nesse programa! \n");
				continue;
			}
		
		
		// Como o usu�rio vai ter op��es de escolha, iremos usar switch case para cada op��o escolhida!
		
		switch(opc){
			case 1:
				resultado = num1 + num2;
				printf("O Resultado da Adi��o = %.2f\n", resultado);
				break;
			case 2:
				resultado = num1 - num2;
				printf("O Resultado da Subtra��o = %.2f\n", resultado);
				break;
			case 3:
				resultado = num1 * num2;
				printf("O Resultado da Multiplica��o = %.2f\n", resultado);
				break;
			case 4:
				resultado = num1/num2;
				printf("O Resultado da Divis�o = %.2f\n", resultado);
				break;
			case 5:
				printf("Programa Encerrado! \n");
				break;
			default:
				printf(" A Op��o escolhida � INV�LIDA! \n");
		}
	
} while( opc != 5);
	
	return 0;
}
