#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int primo (int *num) { //para verificar se é primo;
	int i;
	
	if( *num == 2){
		return 1;
	}
	
	if(*num <= 1){
		return 0;
	}
	
	for(i = 2; i*i <= *num; i++){
		if(*num % i == 0){
			return 0;
		}
	}
	return 1; // ou seja, é primo;
	
}

void divisores(int *n) {
	int i;
	
    printf("\nDivisores de %d: ", *n);
    for (i = 1; i <= *n; i++){
        if (*n % i == 0) { 
            printf("%d ", i);
        }
    }
    printf("\n");
}

void menu(){
	printf("\nInforme a operação: \n");
	printf("1 - Somar\n");
	printf("2 - Subtrair\n");
	printf("3 - Multiplicar\n");
	printf("4 - Dividir\n");
	printf("5 - Resto da divisão\n");
	printf("6 - Verificar se o número é Par\n");
	printf("7 - Verificar se o número é Primo\n");
	printf("8 - Divisores de um número\n");
	printf("9 - Calcular o quadrado\n");
	printf("10 - Calcular o cubo\n");
	printf("0 - Sair do programa\n");
	
	
	printf("\nInforme uma opção: ");
	
	
}

void operacoesmat ( int opc, int *n1, int *n2){
	switch(opc){
		case 1:
			printf("\nO Resultado da Soma: %d\n", *n1 + *n2);
			break;
			
		case 2:
			printf("\nO Resultado da Subtração: %d\n", *n1 - *n2);
			break;
			
		case 3:
		    printf("\nO Resultado da Multiplicação: %d\n", *n1 * *n2);
		    break;
		
		case 4: 
            if (n2 != 0) {
                printf("\nResultado da divisao: %.2f\n", (float)*n1 / *n2);
            } else {
                printf("\nDivisao por 0!\n");
            }
            break;
			
		case 5:
			printf("\nO Resto da Divisão: %d\n", *n1 % *n2);
			break;
		
		case 6:
			if(*n1 % 2 == 0){
				printf("\n%d é Par\n", *n1);
			} else{
				printf("\n%d não é Par\n", *n1 );
			}
			break;
			
		case 7:
			if(primo(n1)){
				printf("\n%d é primo.\n", *n1);
            } else {
                printf("\n%d não é primo.\n", *n1);
            }
            break;
            
        case 8:
        	divisores(n1);
        	break;
        	
        case 9:
        	printf("\nO Quadrado de %d é: %d\n", *n1, *n1 * *n1);
        	break;
			
		case 10:
			printf("\nO Cubo de %d é: %d\n",*n1, *n1 * *n1 * *n1);
			break;
			
		case 0:
			printf("\nSaindo do programa!\n");
			break;
			
		default:
			printf("\nOpção informada errada!\n");
				
				
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n1, n2;
	int opc;
	
	printf("Digite o primeiro número: ");
	scanf("%d", &n1);
	
	printf("Digite o segundo número: ");
	scanf("%d", &n2);
	
	do{
		menu();
		scanf("%d", &opc);
		
		operacoesmat(opc, &n1, &n2);
		
	} while(opc != 0);
	
	
	return 0;
}
