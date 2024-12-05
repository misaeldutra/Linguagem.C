#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(){
	//Escreva um Programa que receba a idade de 10 pessoas, calcule e imprima a quantidade de pessoas maiores de idade (idade>= 18 anos)
	
	setlocale(LC_ALL, "Portuguese");
	
	int idades , qtdmaiores, i;

    qtdmaiores = 0;
	
	for(i = 1; i <= 10; i++){
		printf("Digite a idade %d: ", i);
		scanf("%d", &idades);
		
	 	if (idades >= 18){
			qtdmaiores++; // ou qtdmaiores : qtdmaiores + 1;
		}
	}
	
    
	printf("\n A Quantidade de pessoas maiores de idade: %d\n", qtdmaiores);
	
	system("pause");
	return(0);	
}