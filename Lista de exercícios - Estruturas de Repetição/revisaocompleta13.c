#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, num, spar = 0, sprimo = 0;
	int primo, x;
	
	printf("Digite 10 n�meros: \n\n");
	
	for( i=1; i <= 10; i++){
		printf("Digite o %d� N�mero : \n", i);
		scanf("%d", &num);
		
		if(num % 2 == 0){
			spar = spar + num;
		}
		
		if(num > 1){
			primo = 1;
			for ( x = 2; x * x <= num; x++){
				if(num % x == 0){
				primo = 0;
				break;
			}
			}
		}
	
	if(primo){
		sprimo = sprimo + num;
		}
   } 

printf("\n A Soma dos n�meros pares = %d\n", spar);
printf("\n A Soma dos n�meros primos = %d\n", sprimo);
	
	
	
	return 0;
}
