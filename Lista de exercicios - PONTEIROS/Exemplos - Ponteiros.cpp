#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int a, b, *p1, *p2;
	
	a = 4;
	b = 3;
	p1 = &a; //endere�o da variavel a ; ou seja, S000
	p2 = p1; //conte�do da regi�o de mem�ria de  onde p1 est� apontando; ou seja, p1 = 4
	         // p2 vai receber o valor que p1 est� armazenando/ p2 est� apontando pra onde p1 est� apontando; ou seja, S000
	
	*p2 = *p1 + 3; b = b * (*p1); (*p2)++; // o conte�do de p2 = o conte�do de p1 + 3;
	                                       //               p2 =  4 + 3 = 7;
	                                       // b = b * (*p1);
	                                       // b = 3 *  7  =  21;
	                                       // (*p2)++;
	                                       // *p2 = *p2 + 1;
	                                       // *p2 = 7 + 1 = 8;
	                                       
	p1 = &b; //p1 vai guardar o endere�o de b; ou seja, o endere�o de b = S004; ou seja, o p1 agora est� apontando para o b;
	
	printf("%d %d\n", *p1, *p2); // primeira impress�o vai ser o conteudo de p1 ou seja onde o p1 esta apontando = 21 e imprimir o conteudo de p2 ou seja, onde o p2 esta apontando = 8
	printf("%d %d\n", a, b); // 8 , 21
	
	
	
	return 0;
}
