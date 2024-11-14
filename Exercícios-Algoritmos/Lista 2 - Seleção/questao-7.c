#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main() {
    int n1, n2, n3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);

    int nmaior, nmaior2, nmenor;

    if(n1 > n2 && n2 > n3){
        nmaior= n1;
        if (n2 > n3) {
            nmaior2 = n2;
            nmenor = n3;
        } else {
            nmaior2 = n3;
            nmenor = n2;
        }
    } else if (n2 > n1 && n2 > n3){
        nmaior= n2;
        if(n1>n3) {
            nmaior2 = n1;
            nmenor = n3;
        } else {
            nmaior2 = n3;
            nmenor = n1;
        }
    } else {
        nmaior = n3;
        if (n1 > n2){
            nmaior2 = n1;
            nmenor = n2;
        } else {
            nmaior2 = n2;
            nmenor = n1;
        }
    }

    int soma= nmaior + nmaior2;

    printf("A soma dos dois maiores numeros = %d\n", soma);

system("pause");
return(0);

}