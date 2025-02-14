#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define N 20 // constante para definir o tamanho, para controlar de maneira mais fácil;

//Bilioteca string.h

 // Funções importantes: 

   // strcpy(<destino>, <origem>); 
      // para alterar o conteudo de uma string e atribuir ja no meio do codigo com uma string;
      // NÃO PODE USAR O IGUAL "=" para alterar o conteudo via codigo;
                                
   // strcat(<destino>, <origem>); 
      // Para colar uma string na outra; ex: Nome e sobrenome;
      
   // strlen(<string>);
      // Mostra qual que é o comprimento/tamanho da string;
      
   // strcmp(<string1>, <string2>);
      // Compara Igualdade entre strings;
      // compara se a string 1 é estritamente igual a string 2;
      // Se sim, Retorna o valor "0";
      // Se não, Retorna um valor diferente de 0;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char origem[N] = {"Olá, mundo!"};
	char destino[N];
	
	printf("Antes do stcpy:\n"); // imprimir a origem e o destino logo antes;
	puts(origem);
	puts(destino); // vai imprimir um lixo de memoria qualquer;
	
	strcpy(destino, origem);
	
	printf("Depois do strcpy:\n");
	puts(origem);
	puts(destino);
	
	
	
	return 0;
}
