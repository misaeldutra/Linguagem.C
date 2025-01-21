#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float h, maiorh, menorh, somamulheres;
	int i, nhomens = 0, nmulheres = 0;
	float mediah_mulheres = 0;
	char sexo;
	
	int primeira = 1;
	
	for ( i=1; i <= 15; i++){
		
		printf("Informe o sexo da %d pessoa (M ou F): \n", i);
		scanf(" %c", &sexo);
		
		printf("Informe a altura da %d pessoa: \n", i);
		scanf("%f", &h);
		
		if(primeira){
			menorh = h;
			primeira = 0;
		}
		
		if(h > maiorh){
			maiorh = h;
		} else if( h < menorh){
			menorh = h;
		}
		
		if(sexo == 'F' || sexo == 'f'){
			somamulheres = somamulheres + h;
			nmulheres++;
		} else if(sexo == 'M' || sexo == 'm'){
			nhomens++;
		}
		
	}
	
	if(nmulheres > 0){
			mediah_mulheres = somamulheres/nmulheres;
		}
		
	printf("\n A Maior altura do grupo = %.2f metros \n", maiorh);
	printf("\n A Menor altura do grupo = %.2f metros \n", menorh);
	
	printf("\n A Média de altura das mulheres = %.2f metros \n", mediah_mulheres);
	printf("\n O Número de homens = %d\n", nhomens);
	
	
	
	
	return 0;
}
