#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Prot�tipo de uma fun��o:
  //Deve aparecer antes do main();
  //Sintaxe:
    // <tipo> <nome_da_fun��o>(<par�metros>); declarar q uma fun��o existe sem dizer o codigo dela; 
    // o codigo de tal fun��o fica depois do main; a defini��o;
    
float maiorvalor(float n1, float n2); //Prot�tipo da fun��o; 
    
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
