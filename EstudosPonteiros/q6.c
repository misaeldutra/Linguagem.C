#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int primo (int *num) { //para verificar se � primo;
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
	return 1; // ou seja, � primo;
	
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
	printf("\nInforme a opera��o: \n");
	printf("1 - Somar\n");
	printf("2 - Subtrair\n");
	printf("3 - Multiplicar\n");
	printf("4 - Dividir\n");
	printf("5 - Resto da divis�o\n");
	printf("6 - Verificar se o n�mero � Par\n");
	printf("7 - Verificar se o n�mero � Primo\n");
	printf("8 - Divisores de um n�mero\n");
	printf("9 - Calcular o quadrado\n");
	printf("10 - Calcular o cubo\n");
	printf("0 - Sair do programa\n");
	
	
	printf("\nInforme uma op��o: ");
	
	
}

void operacoesmat ( int opc, int *n1, int *n2){
	switch(opc){
		case 1:
			printf("\nO Resultado da Soma: %d\n", *n1 + *n2);
			break;
			
		case 2:
			printf("\nO Resultado da Subtra��o: %d\n", *n1 - *n2);
			break;
			
		case 3:
		    printf("\nO Resultado da Multiplica��o: %d\n", *n1 * *n2);
		    break;
		
		case 4: 
            if (n2 != 0) {
                printf("\nResultado da divisao: %.2f\n", (float)*n1 / *n2);
            } else {
                printf("\nDivisao por 0!\n");
            }
            break;
			
		case 5:
			printf("\nO Resto da Divis�o: %d\n", *n1 % *n2);
			break;
		
		case 6:
			if(*n1 % 2 == 0){
				printf("\n%d � Par\n", *n1);
			} else{
				printf("\n%d n�o � Par\n", *n1 );
			}
			break;
			
		case 7:
			if(primo(n1)){
				printf("\n%d � primo.\n", *n1);
            } else {
                printf("\n%d n�o � primo.\n", *n1);
            }
            break;
            
        case 8:
        	divisores(n1);
        	break;
        	
        case 9:
        	printf("\nO Quadrado de %d �: %d\n", *n1, *n1 * *n1);
        	break;
			
		case 10:
			printf("\nO Cubo de %d �: %d\n",*n1, *n1 * *n1 * *n1);
			break;
			
		case 0:
			printf("\nSaindo do programa!\n");
			break;
			
		default:
			printf("\nOp��o informada errada!\n");
				
				
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n1, n2;
	int opc;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%d", &n1);
	
	printf("Digite o segundo n�mero: ");
	scanf("%d", &n2);
	
	do{
		menu();
		scanf("%d", &opc);
		
		operacoesmat(opc, &n1, &n2);
		
	} while(opc != 0);
	
	
	return 0;
}
