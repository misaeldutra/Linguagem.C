#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int i, numero;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    printf("\n Tabela de Multiplicação do %d:\n" , numero);
    
    for (i = 0; i <=10; i++) {
    	printf("  %d*%d = %d\n", numero, i, numero*i);
	}
	system("pause");
	return(0);
}
