#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//ESCOPO DE VARIÁVEIS:
  // Local vs Global
    // Local = Variaveis declaradas dentro da função especifica;
    // Global = Variáveis declaradas antes de todas as funções, o que significa que funcionara para todas as funções;
    
  // Declaração de uma função em C:
    //Quando formos declarar definição da funções abaixo da função main:
     // Deve aparecer antes do main()
     // Sintaxe de um protótipo de função:   // declaração feita pelo protótipo
         // <tipo> <nome_da_função>(<parâmetros>);
         

//exemplo protótipo de função:

float maior(float num1, float num2); //protótipo da função

int main(){
	float x, y, m;
	
	printf("Informe um valor:\n");
	scanf("%f", &x);
	
	printf("Informe mais um valor:\n");
	scanf("%f", &y);
	
	m = maior(x,y);
	
	printf("\nMaior: %.2f\n", m);
}


float maior(float num1, float num2){ //definição da função
	if(num1 > num2){
		return num1;
	} else{
		return num2;
	}
}
         
