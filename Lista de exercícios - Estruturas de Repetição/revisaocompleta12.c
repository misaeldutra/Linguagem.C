#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char sexo, resposta;
	int i, totalsim = 0, totalnao = 0, mulheres_sim = 0, homens_nao = 0, totalhomens = 0;
	float porcentagem_homens_nao = 0;
	
	for (i=1;  i<= 10; i++){
		printf("Informe o sexo (M ou F): \n");
		scanf(" %c", &sexo);
		
		printf("Pessoa gostou do produto (S ou N)? \n");
		scanf(" %c", &resposta);
		
		while(sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f'){
			printf("\n ENTRADA INVÁLIDA! \n Tente Novamente: ");
			scanf(" %c", &sexo);
			i--;
		}
		
		while(resposta != 'N' && resposta != 'n' && resposta != 'S' && resposta !='s'){
			printf("\n ENTRADA INVÁLIDA! \n Tente Novamente: ");
			scanf(" %c", &resposta);
			i--;
		}
		
		if(resposta == 'S' || resposta == 's'){
			totalsim++;
			if(sexo == 'F' || sexo == 'f'){
				mulheres_sim++;
			}
		} else if( resposta == 'N' || resposta == 'n'){
			totalnao++;
			if(sexo == 'M' || sexo == 'm'){
				homens_nao++;
			}
		}
		
		if(sexo == 'M' || sexo == 'm'){
			totalhomens++;
		}
	}
	
	if(totalhomens > 0){
		porcentagem_homens_nao = ((float)homens_nao/totalhomens)*100;
	}
	
	printf("\n O Número de pessoas que responderam sim = %d\n", totalsim);
	printf(" O Número de pessoas que responderam não = %d\n", totalnao);
	printf(" O Número de mulheres que responderam sim = %d\n", mulheres_sim);
	printf(" A Porcentagem dos homens que responderam não = %.2f%%\n", porcentagem_homens_nao);
	
	
	
	
	
	return 0;
}
