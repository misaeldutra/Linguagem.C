#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("OS N�MEROS DIGITADOS DEVEM SER DIFERENTES! \n\n");
	
	int N1, N2;
	
	printf("Digite um n�mero: \n");
	scanf("%d", &N1);
	
	printf("Digite outro n�mero: \n");
	scanf("%d", &N2);

    if(N1==N2){
    	printf("OS VALORES DIGITADOS N�O DEVEM SER IGUAIS! \n");
	}else{
		if(N1 > N2){
			printf("A ordem crescente dos n�meros digitados � %d e %d \n", N2 , N1 );
		}else{
			printf("A ordem crescente dos n�meros digitados � %d e %d \n", N1 , N2);
		}
    }
	
	return 0;
}
