#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Strings:
  // vetores de char!
  // texto;
  //para a maquina entender aonde a string acaba, devemos colocar na ultima posi��o do vetor o "\0" = "caractere n�lo;
  // Ou seja, se precisar armazenar 10 letras, temos que ter 11 posi��es, para que na ultima posi��o colocarmos o \0;
  // 10 CARACTERES = 11 POSI��ES;
  // 11� POSI��O = \0;
  //Usamos  o especificador %s para ler no scanf; ex: scanf("%s", <str>); OBS: N�O PRECISAMOS USAR O "&". pois podemos acessar todo o vetor de uma vez;
  //porem, usando o scanf normal, teremos problemas quando clicar o espa�o;
  // - Temos a Sintaxe aprimorada, usamos uma forma melhor:
  //   scanf("%<tam.-1>[^\n]s", <str>); // permite q os espa�os sejam lidos;
  // Para o printf(), temos tambem o %s, e escrevemos printf("<texto>", <str1>, <str2>, ..., <strN>);

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	//ex
	
	char s[10];
	
	printf("Informe algo: (scanf normal): \n"); // ou seja, vai parar de ler quando clicar a tecla espa�o;
	scanf("%s", s);
	fflush(stdin); // toda vez que fizer um scanf em linguagem c, � bom usar essa fun��o;
	
	printf("\nResultado: %s\n\n", s);
	
	printf("Informe algo(scanf aprimorado): \n"); // vai ler ate o espa�o, lendo apenas 9 espa�os, pois o ultimo deixamos para o \0;
	scanf("%9[^\n]s", s);
	fflush(stdin);
	
	printf("\nResultado: %s\n\n", s);
	
	
	
	
	
	
	return 0;
}
