#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float maiorh , menorh , h, somah_mulheres;
	int i, nhomens = 0, nmulheres = 0;
	char sexo;
	
	float mediahmulheres = 0;
	
	int primeira = 1;
	
	
	for(i = 1; i <= 15; i++){
		
		printf("Informe o sexo da %d pessoa (M ou F): ", i);
		scanf(" %c", &sexo);
		
		printf("Informe a altura da %d pessoa: ", i);
		scanf("%f", &h);
		
		
		
	/*	printf("Informe o sexo da %d pessoa (M ou F): ", i);
		scanf(" %c", &sexo); */
		
		if(primeira){
			
			menorh = h;
			primeira = 0;
		}
		
		if(h > maiorh){
			maiorh = h;
		} else if(h < menorh){
			menorh = h;
		} 
		
		if(sexo == 'F' || sexo == 'f'){
			somah_mulheres = somah_mulheres + h;
			nmulheres++;
		} else if(sexo == 'M' || sexo == 'm'){
			nhomens++;
		}
	}
	
	if(nmulheres > 0){
		mediahmulheres = somah_mulheres/nmulheres;
	}
	
	printf("\n A maior altura do grupo = %.2f metros \n", maiorh);
	printf("\n A menor altura do grupo = %.2f metros \n", menorh);
	
	printf("\n A M�dia de altura das mulheres = %.2f metros \n ", mediahmulheres);
	
	printf("\n O n�mero de Homens no grupo = %d \n", nhomens);
	
	
	return 0;
}
