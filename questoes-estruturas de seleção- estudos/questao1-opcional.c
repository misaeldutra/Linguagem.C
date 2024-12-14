#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

// Questão Opcional: Criar um algoritmo que receba um numero e mostre na tela se ele é impar ou par
int main(){
    int numero;

    printf("Digite um numero qualquer: ");
    scanf("%d", &numero);
    
    if(numero % 2 == 0){
        printf("O numero digitado e PAR! \n");
    }else{
        printf("O numero digitado e IMPAR! \n");
    }


}