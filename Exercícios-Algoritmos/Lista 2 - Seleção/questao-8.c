#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(){
    float nlitros, vfinal, desc;
    char combustivel;

    printf("Qual tipo de combustivel ? ( A ou G?\n)");
    scanf("%c", &combustivel);
    printf("Quantos numero de litros? ");
    scanf("%f", &nlitros);

    if(combustivel == 'a' || combustivel == 'A'){
        if(nlitros <= 20){
            desc = 0.03*(nlitros*2,9);
            vfinal = nlitros*2,9 - desc;
        } else {
            desc = 0.05*(nlitros*2,9);
            vfinal = nlitros*2,9 - desc;
        }
        printf("O valor pago pelo cliente foi = %.2f\n", vfinal);
    } else{
        if(combustivel == 'g' || combustivel == 'G'){
            if(nlitros <= 20){
                desc = 0.04*(nlitros*3,3);
                vfinal = nlitros*3,3 - desc;
            } else {
                desc = 0.06*(nlitros*3,3);
                vfinal = nlitros*3,3 - desc;
            }
            printf("O valor pago pelo cliente foi = %.2f\n", vfinal);
        } else {
            printf("Valor Inválido!\n");
        }
    }

    system("pause");
    return(0);
}