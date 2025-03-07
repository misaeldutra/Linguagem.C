#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//FUNÇÕES RECURSIVAS:
  // - Funções que chamam a si mesmo;
  // - Primeiramente, temos que definir um critério de parada;
     // - Para determinar quando a função vai parar de chamar ela mesma;
     // - Esse critério de parada impede que a função fique chamando ela mesma indefinidamente;
     // - É preciso fazer alterações no parãmetro ao invocar novamente a função;
     // - Esse critério de parada é feito com testes condicionais sobre o parâmetro, identificando quando parar de chamar a função;
     
//ex: Imprimir todos os números de n até 0
     
     
void imprimir(int num){
	if(num == 0){
		printf("%d ", num); //criterio de parada;
	} else{
		printf("%d ", num); 
	    
	    imprimir(num - 1); //chamada recursiva; em algum momento essa chamada recursiva vai finalizar; 
	}                      //Sistema operacional vai empilhar todas essas informações na pilha de recursão;
	                       //quando acabar, o sistema operacional vai começar a desempilhar ate finalizar, e vai retornar pra main;
}

//Obs: Se quiser fazer na ordem crescente, basta fazer a chamada recursiva primeiro e depois a impressão;
// ex:
    //  imprimir(num - 1);
	//  printf("%d ", num); 

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n;
	
	printf("Informe um valor maior que zero: ");
	scanf("%d", &n);
	
	imprimir(n);
	
	
	
	
	
	return 0;
}
