#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    int valor1 , valor2;

    printf("Digite um numero: ");
    scanf("%d", &valor1);


    printf("Digite outro numero diferente: ");
    scanf("%d", &valor2);

    if(valor1>valor2){
        printf("A ordem crescente foi %.d , %.d", valor2, valor1);
    }
    else
        printf("A ordem crescente foi %.d , %.d", valor1, valor2);
    
return(0);
}