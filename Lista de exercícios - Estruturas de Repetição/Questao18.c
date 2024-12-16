#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, idade, totalhomens = 0, totalmulheres = 0;
	float peso, soma_peso_mulheres, soma_idade_homens;
	float media_idade_homens, media_peso_mulheres;
	char sexo;
	
	for( i = 1; i <= 3; i++){ // A questao pede para ser 10 pessoas, porem para testar, usaremos apenas 3!
		printf("Informe a idade %d \n", i);
		scanf("%d", &idade);
		
		printf("Informe o peso: \n");
		scanf("%f", &peso);
		
		printf("Informe o sexo (M ou F): \n ");
		scanf(" %c", &sexo);
		
		if(sexo == 'm' || sexo == 'M'){
			totalhomens++;
			soma_idade_homens = soma_idade_homens + idade;
		} else if(sexo == 'f' || sexo == 'F'){
			totalmulheres++;
			soma_peso_mulheres = soma_peso_mulheres + peso;
		} else{
			printf("\n SEXO INVÁLIDO! \n");
		}
		
	}
		
		printf(" \n O Total de homens = %d\n", totalhomens);
		printf(" O Total de mulheres = %d\n", totalmulheres);
		
		if(totalhomens > 0){
			printf(" A Média das idades dos homens = %.2f\n\n", soma_idade_homens / totalhomens);
		} else {
			printf(" \n NENHUM HOMEM INFORMADO! \n");
		}
		
		if(totalmulheres > 0){
			printf("\n  A Média dos pesos das mulheres = %.2f\n\n", soma_peso_mulheres / totalmulheres);
		} else{
			printf("\n  NENHUMA MULHER INFORMADA!\n\n");
		}
		
		
	
	return 0;
}
