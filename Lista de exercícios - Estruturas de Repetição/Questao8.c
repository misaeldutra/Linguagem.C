#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float maiorh , menorh , h, somah;
	int i, nhomens = 0, nmulheres = 0;
	
	float mediahmulheres = 0;
	
	int primeira = 1;
	
	
	for(i = 1; i <= 15; i++){
		printf("Informe a altura da %d pessoa: ", i);
		scanf("%f", &h);
		
		getchar();
		
		char sexo;
		
		printf("Informe o sexo da %d pessoa (M ou F): ", i);
		scanf(" %c", &sexo);
		
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
			somah = somah + h;
			nmulheres++;
		} else if(sexo == 'M' || sexo == 'm'){
			nhomens++;
		}
	}
	
	if(nmulheres > 0){
		mediahmulheres = somah/nmulheres;
	}
	
	printf("\n A maior altura do grupo = %.2f metros \n", maiorh);
	printf("\n A menor altura do grupo = %.2f metros \n", menorh);
	
	printf("\n A Média de altura das mulheres = %.2f metros \n ", mediahmulheres);
	
	printf("\n O número de Homens no grupo = %d \n", nhomens);
	
	
	return 0;
}
