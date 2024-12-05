#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int idade;

    printf("CLASSIFICACAO DE CATEGORIAS DE NATACAO \n\n ");

    printf(" Digite a sua idade: ");
    scanf("%d", &idade);
    switch(idade){
        case 5 ... 7:
            printf(" - Sua Categoria e: Infantil A \n\n");
            break;
        case 8 ... 11:
            printf(" - Sua Categoria e: Infantil B \n\n");
            break;
        case 12 ... 13:
            printf(" - Sua Categoria e: Juvenil A \n\n");
            break;
        case 14 ... 17:
            printf(" - Sua Categoria e: Juvenil B \n\n");
            break;
        case 18 ... 100:
            printf(" - Sua Categoria e: Adultos \n\n");
            break;
        default:
            printf(" SUA IDADE NAO ESTA NAS CATEGORIAS \n\n " );
    }
   system("pause");
   return(0);
}