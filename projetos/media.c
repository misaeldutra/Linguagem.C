
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "PORTUGUESE");
    printf("Realizacao da media de um aluno!\n\n");
    float vnota1=0.0 , vnota2=0.0 , vnota3=0.0, vnota4=0.0, vmedia=0.0;

    printf("Digite a primeira nota: ");
    scanf("%f", &vnota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &vnota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &vnota3);

    printf("Digite a quarta nota: ");
    scanf("%f", &vnota4);

    vmedia = (vnota1+vnota2+vnota3+vnota4)/4;

    printf("A Media do aluno(a) e: %.2f", vmedia);

    return(0);

    
}