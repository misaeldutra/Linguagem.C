#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    float htrabalho, salarioh, stotal, hsemanal,extras;

    printf("Digite o numero de horas trabalhadas no mes: ");
    scanf("%f", &htrabalho);

    printf("Qual o salario por hora? ");
    scanf("%f", &salarioh);

    hsemanal = htrabalho/4;

    float salario = hsemanal * salarioh;


    if(hsemanal > 40){ 
        extras = hsemanal - 40;
        stotal = salario + (extras*salarioh*1.5);
    }else{
        stotal = salario;
    }

    printf("O salario total do funcionario foi de = %.2f\n", stotal);
system("pause");
return(0);
}