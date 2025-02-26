#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUNÇÕES(Procedimentos):
    // é um subprograma; Trabalhar com módulos para facilitar um programa maior;
    // Destacar um pedaço do código em uma função; // programa de melhor manutenção/compreensão
    
    // Funções servem para resolver problemas complexos através da combinação de soluções menores; Modularizar o programa
    // Sintaxe de definição: (para criar uma função nova)
        // <tipo> <nome_da_função>(<parâmetros>) {
        //     <bloco de comandos>
        //      return <informação>;
        
    //Detalhes
      //Identificador: mesma regra de variáveis.
      //Tipo de retorno
         // Retorno não é obrigatório em C;
      //Parâmetros de entrada
         // Nenhum, um ou vários.
         
//exemplo:

float maior (float num1, float num2){ //função se chama "maior"
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
	
	m = maior(x,y); // chamada da função; neste momento o codigo é desviado lá para cima; valor de x é copiado para num1 e y para num2;
	
	printf("\nMaior: %.2f\n", m);
}
