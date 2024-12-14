#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, total = 15;
	int idade , fx1 = 0 , fx2 = 0 , fx3 = 0 , fx4 = 0 , fx5 = 0 ;
	float porcentagem_fx1, porcentagem_fx2, porcentagem_fx3, porcentagem_fx4, porcentagem_fx5;
	
	printf("Digite a idade de 15 pessoas: \n\n");
	
	for ( i= 1; i<=15; i++){
		printf("Digite a idade %d: ", i);
		scanf("%d", &idade);
	
	    switch(idade){
	    	case 1 ... 15:
	    		fx1++;
	    	    break;
	    	case 16 ... 30:
	    		fx2++;
	    		break;
	    	case 31 ... 45:
	    		fx3++;
	    		break;
	    	case 46 ... 60:
	    		fx4++;
	    		break;
	    	case 61 ... 120:
	    		fx5++;
	    		break;
	    	default:
	    		printf("Essa idade esta fora das Categorias! \n");
		}
		/*
		if(idade>=1 && idade<=15){
			fx1++;
		} else if (idade>= 16 && idade<= 30){
			fx2++;
		} else if (idade>= 31 && idade<= 45){
			fx3++;
		} else if (idade>= 46 && idade<= 60){
			fx4++;
		} else {
			fx5++;
		}*/
		
	
   }
   
   
    porcentagem_fx1 = (fx1*100)/ total;
    porcentagem_fx2 = (fx2*100)/ total;
    porcentagem_fx3 = (fx3*100)/ total;
    porcentagem_fx4 = (fx4*100)/ total;
    porcentagem_fx5 = (fx5*100)/ total;
    
    printf("A quantidade de pessoas em cada faixa etária: \n");
    printf("Faixa 1 a 15 anos = %d pessoas (%.2f%%)\n", fx1, porcentagem_fx1);
    printf("Faixa 16 a 30 anos = %d pessoas (%.2f%%)\n", fx2, porcentagem_fx2);
    printf("Faixa 31 a 45 anos = %d pessoas (%.2f%%)\n", fx3, porcentagem_fx3);
    printf("Faixa 46 a 60 anos = %d pessoas (%.2f%%)\n", fx4, porcentagem_fx4);
    printf("Faixa Maior ou igual a 61 anos = %d pessoas (%.2f%%)\n", fx5, porcentagem_fx5);
   
	
	return 0;
}
