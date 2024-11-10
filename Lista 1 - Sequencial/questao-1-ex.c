#include <stdio.h>
#include <stdlib.h>

int main () {
    int A, B, AUX;

    printf("Digite dois valores: ");
    scanf("%d%d", &A, &B);
   
  
    printf("Valores lidos: A: %d\tb: %d\n", A, B);

    AUX= A;
    A= B; //atribuição
    B= AUX;

    printf("Valores Trocados: A: %d\tb: %d\n", A, B);

    return (0);
}