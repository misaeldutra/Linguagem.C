#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Strings:
  // vetores de char!
  // texto;
  //para a maquina entender aonde a string acaba, devemos colocar na ultima posição do vetor o "\0" = "caractere núlo;
  // Ou seja, se precisar armazenar 10 letras, temos que ter 11 posições, para que na ultima posição colocarmos o \0;
  // 10 CARACTERES = 11 POSIÇÕES;
  // 11º POSIÇÃO = \0;
  //Usamos  o especificador %s para ler no scanf; ex: scanf("%s", <str>); OBS: NÃO PRECISAMOS USAR O "&". pois podemos acessar todo o vetor de uma vez;
  //porem, usando o scanf normal, teremos problemas quando clicar o espaço;
  // - Temos a Sintaxe aprimorada, usamos uma forma melhor:
  //   scanf("%<tam.-1>[^\n]s", <str>); // permite q os espaços sejam lidos;
  // Para o printf(), temos tambem o %s, e escrevemos printf("<texto>", <str1>, <str2>, ..., <strN>);

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	//ex
	
	char s[10];
	
	printf("Informe algo: (scanf normal): \n"); // ou seja, vai parar de ler quando clicar a tecla espaço;
	scanf("%s", s);
	fflush(stdin); // toda vez que fizer um scanf em linguagem c, é bom usar essa função;
	
	printf("\nResultado: %s\n\n", s);
	
	printf("Informe algo(scanf aprimorado): \n"); // vai ler ate o espaço, lendo apenas 9 espaços, pois o ultimo deixamos para o \0;
	scanf("%9[^\n]s", s);
	fflush(stdin);
	
	printf("\nResultado: %s\n\n", s);
	
	
	
	
	
	
	return 0;
}
