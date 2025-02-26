#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUN��ES(Procedimentos):
    // � um subprograma; Trabalhar com m�dulos para facilitar um programa maior;
    // Destacar um peda�o do c�digo em uma fun��o; // programa de melhor manuten��o/compreens�o
    
    // Fun��es servem para resolver problemas complexos atrav�s da combina��o de solu��es menores; Modularizar o programa
    // Sintaxe de defini��o: (para criar uma fun��o nova)
        // <tipo> <nome_da_fun��o>(<par�metros>) {
        //     <bloco de comandos>
        //      return <informa��o>;
        
    //Detalhes
      //Identificador: mesma regra de vari�veis.
      //Tipo de retorno
         // Retorno n�o � obrigat�rio em C;
      //Par�metros de entrada
         // Nenhum, um ou v�rios.
         
//exemplo:

float maior (float num1, float num2){ //fun��o se chama "maior"
	if(num1 > num2){
		return num1;
	} else{
		return num2;
	}
}

int main(){
	
	float x, y, m;
	
	printf("Informe um valor:\n");
	scanf("%f", &x);
	printf("Informe mais um valor:\n");
	scanf("%f", &y);
	
	m = maior(x,y); // chamada da fun��o; neste momento o codigo � desviado l� para cima; valor de x � copiado para num1 e y para num2;
	
	printf("\nMaior: %.2f\n", m);
}
