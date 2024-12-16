#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char sexo, resposta;
	int i, totalsim = 0, totalnao = 0, mulheres_sim = 0, totalhomens = 0, homens_nao = 0;
	float percento_homens_nao = 0;
	
	for ( i = 1; i <= 10; i++){
		printf("Informe o sexo ( M ou F): ");
		scanf(" %c", &sexo);
		printf("Pessoa gostou do produto (S ou N)? ");
		scanf(" %c", &resposta);
		
		while (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f'){
			printf("\n  ENTRADA INVÁLIDA! \n Tente Novamente: ");
			scanf(" %c", &sexo);
			i--;
		}
		
		while (resposta != 'S' && resposta != 's' && resposta != 'N' && resposta != 'n'){
			printf("ENTRADA INVÁLIDA! \n Tente novamente: ");
			scanf(" %c", &resposta);
			i--;
		}
		
		if(resposta == 's' || resposta == 'S'){
			totalsim++;
			if (sexo == 'f' || sexo == 'F'){
				mulheres_sim++;
			}
		} else if( resposta == 'n' || resposta == 'N'){
			totalnao++;
			if (sexo == 'm' || sexo == 'M'){
				homens_nao++;
			}
		}
		
		if (sexo == 'm' || sexo == 'M'){
			totalhomens++;
		}
		
	}
	
	if (totalhomens > 0){
		percento_homens_nao = ((float)homens_nao / totalhomens) * 100;
	}
	
	printf(" \n O Número de pessoas que  responderam sim = %d\n", totalsim);
	printf(" O Número de pessoas que responderam nao = %d\n", totalnao);
	printf(" O Número de mulheres que responderam sim = %d\n", mulheres_sim);
	printf(" A Porcentagem de homens que responderam nao = %.2f%%\n", percento_homens_nao);
	
	
	
	
	return 0;
}
