#include <stdio.h>
#include <stdlib.h>

int main () {
    int A, B, AUX;
    A= 10;
    B= 20;
    AUX= 0;

    
    printf("Valores lidos: A: %d\tb: %d\n", A, B);

    AUX= A;
    A= B; 
    B= AUX;

    printf("Valores Trocados: A: %d\tb: %d\n", A, B);

    return (0);
}