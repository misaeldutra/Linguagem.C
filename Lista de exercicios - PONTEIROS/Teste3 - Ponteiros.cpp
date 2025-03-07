#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Ponteiros:
  //Tipo de vari�vel que aponta para outra de um tipo qualquer;
  //Ponteiro guarda o endere�o de mem�ria de uma vari�vel;
  
  //ex: int teste = 20;
    //  int *p;
        
    //  p = &teste; endere�o de teste; o qual teste esta armazenando 20;
    //  printf("%d\n", *p);
    
    //Para saber o endere�o de uma vari�vel, basta usar o operador &;
       //ex: 
	       //int count = 10;
           //int *pt; // a express�o *pt � equiv oa proprio count
           
           //pt = &count;
           
    // Para alterarmos o valor de countusando pt, basta usarmos o operador "inverso" do operador &, ou seja, *;
       //ex: 
           //int count = 10;
           //int *pt;
           
           //pt = &count;
           //*pt = 12;
           
//ex pratico:

int main(){
	setlocale(LC_ALL,"Portuguese");
	int num, valor;
	int *p;
	
	num = 20;
	p = &num; // pega p emdere�o de num;
	valor = *p;// Valor � igualado a num de uma maneira indireta;
	
	printf("\n\nValor da vari�vel �(num): %d\n", valor);
	
	printf("Endere�o para onde o ponteiro aponta(p): %p\n", p);
	
	printf("Valor da vari�vel apontada (*p): %d\n", *p);
	
	
	
	return 0;
}
