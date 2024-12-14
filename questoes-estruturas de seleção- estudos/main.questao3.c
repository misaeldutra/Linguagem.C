#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL ,"Portuguese");
	
	printf("OBS: Digite Dois Numeros Diferentes! \n\n");
	int N1 ,N2;
	
	printf("Digite um numero: ");
	scanf("%d", &N1);
	
	printf("Digite outro numero: ");
	scanf("%d", &N2);
	
	if (N1 > N2){
		printf("A ordem crescente dos numeros digitados é: %.d,%.d \n" , N2, N1);
	} else
		printf("A ordem crescente dos numeros digitados é: %.d,%.d \n", N1, N2);
		
	system("pause");
	return(0);
}
