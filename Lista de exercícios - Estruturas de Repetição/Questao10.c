#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//CONFERIR SE ESTA RODANDO

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, idade, fx1 = 0, fx2 = 0, fx3 = 0, fx4 = 0;
	float peso ,  mediapeso;
	float speso1, speso2, speso3, speso4;
	int idadeinvalida = 0;
	
	printf("Informe a idade e o peso de 15 pessoas: \n\n");
	
	for( i=1; i<=15; i++ ){
		printf("Informe a idade %d: ", i);
		scanf("%d", &idade);
		
		printf("Informe o peso: ");
		scanf("%f", &peso);
		
		switch(idade){
			case 1 ... 10:
				speso1 = speso1 + peso;
				fx1++;
				break;
			case 11 ... 20:
				speso2 = speso2 + peso;
				fx2++;
				break;
			case 21 ... 30:
				speso3 = speso3 + peso;
				fx3++;
				break;
			
			default:
				if(idade > 30){
			    speso4 = speso4 + peso;
				fx4++;
				break;
			}
				
	   }  
	}           
	

	
	printf("\n A Média dos pesos por faixa etária: \n");
	
	 if(fx1 > 0){
		printf(" 1 a 10 anos = %.2f\n", speso1/fx1);
    } else{
    	printf(" 1 a 10 anos = NENHUMA PESSOA NESTA FAIXA ETÁRIA! \n");
	}
		
	if(fx2 > 0){
		printf(" 11 a 20 anos = %.2f \n", speso2/fx2);
	} else{
		printf(" 11 a 20 anos = NENHUMA PESSOA NESTA FAIXA ETÁRIA! \n");
	}
	
	if(fx3 > 0){
		printf(" 21 a 30 anos = %.2f \n", speso3/fx3);
	} else{
		printf(" 21 a 30 anos = NENHUMA PESSOA NESTA FAIXA ETÁRIA! \n");
	}
	
	if(fx4 > 0){
		printf(" Acima de 30 anos = %.2f \n", speso4/fx4);
	} else{
		printf(" Acima de 30 anos = NENHUMA PESSOA NESTA FAIXA ETÁRIA! \n");
	}
	
	
	return 0;
}
