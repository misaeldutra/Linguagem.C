#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, idade, opiniao, s_idade_otimo;
	int otimo, bom , regular;
	float m_idade_otimo = 0, percento_bom;
	
	for( i=1; i<=15; i++){
		printf("Informe a idade %d: ", i);
		scanf("%d", &idade);
		printf("Informe a opiniao sobre o filme: \n");
		printf("  3- Ótimo \n  2- Bom \n  1- Regular \n");
		scanf("%d", &opiniao);
		
		switch(opiniao){
			case 3:
				s_idade_otimo = s_idade_otimo + idade;
				otimo++;
				break;
			case 2:
				bom++;
				break;
			case 1:
				regular++;
				break;
			default:
				printf("OPINIÃO INVÁLIDA! \n");
				i--;
				continue;
		}
	}
	
	if (otimo > 0){
		m_idade_otimo = s_idade_otimo / otimo;
	}
	
	percento_bom = (float)bom/15*100;
	
	printf(" \n A Média das idades das pessoas que responderam Ótimo = %.f\n", m_idade_otimo);
	
	printf(" A Quantidade de pessoas que responderam Regular = %d\n", regular);
	
	printf(" A Porcentagem das pessoas que responderam Bom = %.2f%%\n", percento_bom);
	
	
	return 0;
}
