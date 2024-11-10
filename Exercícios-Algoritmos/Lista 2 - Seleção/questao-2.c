#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(){
    float  total;
    int nmaca;

    printf("Digite quantas macas sera comprada: ");
    scanf("%f", &nmaca);

    if(nmaca <= 12)
       nmaca = 1,30;
       total = nmaca*1,30;
       printf("O total da compra = %f\n" ,total);
     else(nmaca > 12)
        nmaca = 1,00;
        total = nmaca*1,00;
        printf("O total da compra = %f\n", total);


    system("pause");
    return(0);


    
   


}