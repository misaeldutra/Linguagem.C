#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//ESCOPO DE VARI�VEIS:
  // Local vs Global
    // Local = Variaveis declaradas dentro da fun��o especifica;
    // Global = Vari�veis declaradas antes de todas as fun��es, o que significa que funcionara para todas as fun��es;
    
  // Declara��o de uma fun��o em C:
    //Quando formos declarar defini��o da fun��es abaixo da fun��o main:
     // Deve aparecer antes do main()
     // Sintaxe de um prot�tipo de fun��o:   // declara��o feita pelo prot�tipo
         // <tipo> <nome_da_fun��o>(<par�metros>);
         

//exemplo prot�tipo de fun��o:

float maior(float num1, float num2); //prot�tipo da fun��o

int main(){
	float x, y, m;
	
	printf("Informe um valor:\n");
	scanf("%f", &x);
	
	printf("Informe mais um valor:\n");
	scanf("%f", &y);
	
	m = maior(x,y);
	
	printf("\nMaior: %.2f\n", m);
}


float maior(float num1, float num2){ //defini��o da fun��o
	if(num1 > num2){
		return num1;
	} else{
		return num2;
	}
}
         
