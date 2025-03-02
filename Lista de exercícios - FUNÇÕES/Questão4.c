#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Tranformar decimal para bin�rio:
  //divis�es sucessivas;
  //ex: 3/2 = 1   1
      //1/2 = 0   1
      
    //3 em bin�rio: 011

void binario(int n){
	if(n == 0){ // imprime o 0 inicialmente;
		printf("%d oi", n);
	} else{
		binario(n/2);
		printf("%d", n % 2); // imprimir o resto da divis�o por 2;
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num;
	
	printf("Informe um n�mero decimal: ");
	scanf("%d", &num);
	
	binario(num);
	
	
	
	return 0;
}
