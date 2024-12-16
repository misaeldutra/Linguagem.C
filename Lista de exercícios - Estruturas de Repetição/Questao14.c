#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
		float num1, num2, resultado;
		int opc;
		
		do{
			printf("\n --- Menu de Operações ---\n"); // Para apresentar para o usuário as possibilidades de escolhas no menu!
			printf("  1. Adição\n");
			printf("  2. Subtração\n");
			printf("  3. Multiplicação\n");
			printf("  4. Divisão\n");
			printf("  5. Sair do Programa\n\n");
			
			
			printf("Escolha uma das opções acima: ");
			scanf("%d", &opc);
			
			if(opc >= 1 && opc <= 4){
				printf("Informe o primeiro número: ");
				scanf("%f", &num1);
				printf("Informe o segundo número: ");
				scanf("%f", &num2);
			} else if(opc == 4 && num2 == 0){
				printf("Não é permitido Divisão por zero nesse programa! \n");
				continue;
			}
		
		
		// Como o usuário vai ter opções de escolha, iremos usar switch case para cada opção escolhida!
		
		switch(opc){
			case 1:
				resultado = num1 + num2;
				printf("O Resultado da Adição = %.2f\n", resultado);
				break;
			case 2:
				resultado = num1 - num2;
				printf("O Resultado da Subtração = %.2f\n", resultado);
				break;
			case 3:
				resultado = num1 * num2;
				printf("O Resultado da Multiplicação = %.2f\n", resultado);
				break;
			case 4:
				resultado = num1/num2;
				printf("O Resultado da Divisão = %.2f\n", resultado);
				break;
			case 5:
				printf("Programa Encerrado! \n");
				break;
			default:
				printf(" A Opção escolhida é INVÁLIDA! \n");
		}
	
} while( opc != 5);
	
	return 0;
}
