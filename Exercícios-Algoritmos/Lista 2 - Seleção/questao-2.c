#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main ()
{
    float quantm, vmaca=1.3;
    printf("Digite o numero de macas desejadas: ");
    scanf("%f", &quantm);

    if(quantm>=12){
        vmaca=1.0;
        printf("O valor total foi de %.2f .", vmaca*quantm);
    }
    else
        printf("O valor total foi de %.2f .", vmaca*quantm);
    
system("pause");
return(0);
}