#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//FUN��ES RECURSIVAS:
  // - Fun��es que chamam a si mesmo;
  // - Primeiramente, temos que definir um crit�rio de parada;
     // - Para determinar quando a fun��o vai parar de chamar ela mesma;
     // - Esse crit�rio de parada impede que a fun��o fique chamando ela mesma indefinidamente;
     // - � preciso fazer altera��es no par�metro ao invocar novamente a fun��o;
     // - Esse crit�rio de parada � feito com testes condicionais sobre o par�metro, identificando quando parar de chamar a fun��o;
     
//ex: Imprimir todos os n�meros de n at� 0
     
     
void imprimir(int num){
	if(num == 0){
		printf("%d ", num); //criterio de parada;
	} else{
		printf("%d ", num); 
	    
	    imprimir(num - 1); //chamada recursiva; em algum momento essa chamada recursiva vai finalizar; 
	}                      //Sistema operacional vai empilhar todas essas informa��es na pilha de recurs�o;
	                       //quando acabar, o sistema operacional vai come�ar a desempilhar ate finalizar, e vai retornar pra main;
}

//Obs: Se quiser fazer na ordem crescente, basta fazer a chamada recursiva primeiro e depois a impress�o;
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
