#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, idade, qtdcasadas = 0, qtdsolteiras = 0, qtdviuvas = 0, qtdseparadas = 0, total_pessoas = 0;
	float media_idade_viuvas, soma_idade_viuvas, percento_separadas;
	char estadocivil;
	
	for ( i = 1; i<= 5; i++){ // A questao pede 20 pessoas, porem para testar, usaremos 5 pessoa;
		printf("Informe a idade da %d° pessoa: \n", i);
		scanf("%d", &idade);
		printf("Informe o Estado Civil( C, S, V ou D) da %d° pessoa: \n", i);
		scanf(" %c", &estadocivil);
		
		switch(estadocivil){
			case 'C':
			case 'c':
				qtdcasadas++;
				break;
			case 'S':
			case 's':
				qtdsolteiras++;
				break;
			case 'V':
			case 'v':
				qtdviuvas++;
				soma_idade_viuvas = soma_idade_viuvas + idade;
				break;
			case 'D':
			case 'd':
				qtdseparadas++;
				break;
			default:
				printf("ESTADO CIVIL INVÁLIDO!\n");
				i--;
				break;
		}
		
		/*if(estadocivil == 'c' || estadocivil == 'C'){
			qtdcasadas++;
		} else if(estadocivil == 's' || estadocivil == 'S'){
			qtdsolteiras++;
		} else if(estadocivil == 'v' || estadocivil == 'V'){
			qtdviuvas++;
		} else if(estadocivil == 'd' || estadocivil == 'D'){
			qtdseparadas++;
		} else{
			printf(" ESTADO CIVIL INVÁLIDO NO PROGRAMA! tente de novo: ");
			i--;
			continue;
		}*/
	}
	
	if(qtdviuvas > 0){
		media_idade_viuvas = (soma_idade_viuvas / qtdviuvas);
	} else{
		media_idade_viuvas = 0;
	}
	
	percento_separadas = ((float)qtdseparadas / 5) * 100; // seria dividido por 20. porem estamos testando! 
	/* obs= colocamos o float, pois a divisão entre inteiro e inteiro resultario em inteiro, descartando o float, dando errado o codigo*/
	
	printf("\n A Quantidade de pessoas Casadas = %d\n", qtdcasadas);
	printf("\n A Quantidade de pessoas Solteiras = %d\n", qtdsolteiras);
	printf("\n A Quantidade de pessoas Viúvas = %d\n", qtdviuvas);
	printf("\n A Quantidade de pessoas Separadas/Desquitadas = %d\n", qtdseparadas);
	printf("\n A Porcentagem de pessoas Desquitadas/Separadas = %.2f%%\n", percento_separadas);
	
	return 0;
}
