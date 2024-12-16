#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, num, somapar = 0, somaprimo = 0;
	int primo, x; // x � o divisor;
	
	printf("Informe 10 n�meros: \n\n");
	
	for (i = 1; i <= 10; i++){
		printf("Digite o %d� N�mero: ", i);
		scanf("%d", &num);
		
		if(num % 2 == 0){
			somapar = somapar + num;
		}
		
		if(num > 1){
			primo = 1;
			for (x = 2; x * x <= num; x++){
				if(num % x == 0){
					primo = 0;
					break;
				}
			}
		}
		if(primo){
			somaprimo = somaprimo + num;
		}
	}
	
	printf("\n A Soma dos n�meros pares = %d\n", somapar);
	printf("\n A Soma dos n�meros primos = %d\n", somaprimo);
	
		
	
	return 0;
}
