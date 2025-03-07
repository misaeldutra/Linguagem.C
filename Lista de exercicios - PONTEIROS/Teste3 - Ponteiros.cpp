#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Ponteiros:
  //Tipo de variável que aponta para outra de um tipo qualquer;
  //Ponteiro guarda o endereço de memória de uma variável;
  
  //ex: int teste = 20;
    //  int *p;
        
    //  p = &teste; endereço de teste; o qual teste esta armazenando 20;
    //  printf("%d\n", *p);
    
    //Para saber o endereço de uma variável, basta usar o operador &;
       //ex: 
	       //int count = 10;
           //int *pt; // a expressão *pt é equiv oa proprio count
           
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
	p = &num; // pega p emdereço de num;
	valor = *p;// Valor é igualado a num de uma maneira indireta;
	
	printf("\n\nValor da variável é(num): %d\n", valor);
	
	printf("Endereço para onde o ponteiro aponta(p): %p\n", p);
	
	printf("Valor da variável apontada (*p): %d\n", *p);
	
	
	
	return 0;
}
