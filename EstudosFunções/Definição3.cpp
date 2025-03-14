#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Protótipo de uma função:
  //Deve aparecer antes do main();
  //Sintaxe:
    // <tipo> <nome_da_função>(<parâmetros>); declarar q uma função existe sem dizer o codigo dela; 
    // o codigo de tal função fica depois do main; a definição;
    
float maiorvalor(float n1, float n2); //Protótipo da função; 
    
int main(){
	setlocale(LC_ALL,"Portuguese");
	float x, y, m;
	
	printf("Informe um valor: \n");
	scanf("%f", &x);
	printf("Informe outro valor: \n");
	scanf("%f", &y);
	
	m = maiorvalor(x,y);
	
	printf("\nO maior valor = %.2f\n", m);
	
	return 0;
}

float maiorvalor(float n1, float n2){
	if(n1 > n2){
		return n1;
	}else{
		return n2;
	}
}
