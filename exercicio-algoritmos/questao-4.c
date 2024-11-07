#include <stdio.h>
#include <stdlib.h>

int main() {
    float b, h, area;

    printf("Digite a base do retangulo: ");
    scanf("%f" , &b);

    printf("Digite a altura do retangulo: ");
    scanf("%f" , &h);

    area = b*h;

    printf("A area do retangulo = %.f\n", area);

    system("pause");
    return(0);
}