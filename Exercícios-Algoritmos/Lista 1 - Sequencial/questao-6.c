#include <stdio.h>
#include <stdlib.h>

int main() {
    float F, C;

    printf("Digite a temperatura Fahrenheit: ");
    scanf("%f", &F);

    C= (F-32)/1.8;

    printf("O valor correspondente em graus Celsius = %.2f\n" , C);

    system("pause");
    return(0);
}