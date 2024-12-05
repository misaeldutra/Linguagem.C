#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");
    int Codigo, qtd;
    float ptotal, pUnit;

    printf("PROGRAMA PARA CALCULAR PRECO TOTAL \n\n");

    printf(" Digite o codigo do produto desejado: ");
    scanf("%d", &Codigo);
    printf(" Digite a quantidade comprada: ");
    scanf("%d", &qtd);

    switch (Codigo){
        case 1001:
            pUnit = 5.32;
            break;
        case 1324:
            pUnit = 6.45;
            break;
        case 6548:
            pUnit = 2.37;
            break;
        case 987:
            pUnit = 5.32;
            break;
        case 7623:
            pUnit = 6.45;
            break;
        default:
            printf(" - CODIGO INVALIDO \n\n");
            return 1;
    }
        
        ptotal = pUnit*qtd;

        printf("O preco total: %.2f\n", ptotal);

    
    system("pause");
    return(0);
}