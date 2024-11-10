#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //arquivo de cabeçalho

/* OBS:
     "%d" = indica que printf() deve colocar um inteiro na tela.
      setlocale = função para indicar a linguagem.
      

*/
int main() {
    int V;

    printf ("Digite um valor: " );
    scanf("%d" , &V);

    //Imprimir na tela o valor digitado - 1, ou seja, imprimir o antecessor!
    setlocale(LC_ALL, "");//função
    printf("O antecessor de %d = %d\n", V, V - 1);

    system("pause");
    return(0);

}