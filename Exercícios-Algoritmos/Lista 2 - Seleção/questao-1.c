#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    int numero;

    printf("Digite um valor: ");
    scanf("%d", &numero);
    if (numero > 10)
        printf("E MAIOR QUE 10! \n");
    else 
       printf("NAO E MAIOR QUE 10! \n");

    system("pause");
    return(0);
}