//Fazer um programa em C que leia a idade de uma pessoa e imprima a mensagem "MENOR DE IDADE" caso seja inferior a 18 anos.
 // Caso contrário, imprima a mensagem "MAIOR DE IDADE
 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("Digite sua idade: \n");
	scanf("%d", &idade);
	
	if(idade<18){
		printf(" \n MENOR DE IDADE! \n");
	} else{
		printf(" \n MAIOR DE IDADE! \n");
	}
	
	
	return 0;
}
