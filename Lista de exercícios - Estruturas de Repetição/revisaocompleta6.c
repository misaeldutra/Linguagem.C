#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int codigo, totalvotos = 0, candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0, votobranco = 0, votonulo = 0;
	float porcentagemnulo, porcentagembranco;
	
	
	while(1){
		printf("Digite o código: \n");
		scanf("%d", &codigo);
		
		if(codigo == 0){
			break;
		}
		
		switch (codigo){
			case 1:
				candidato1++;
				break;
			case 2:
				candidato2++;
				break;
			case 3:
				candidato3++;
				break;
			case 4:
				candidato4++;
				break;
			case 5:
				votonulo++;
				break;
			case 6:
				votobranco++;
				break;
			default:
				printf("CÓDIGO INVÁLIDO! \n\n");
				continue;
		}
		totalvotos++;
	} 
	
	porcentagembranco = (votobranco*100)/ totalvotos;
	porcentagemnulo = (votonulo*100)/ totalvotos;
	
	printf("\n RESULTADO GERAL DA VOTAÇÃO: \n\n");
	printf(" Candidato 1 = %d voto(s) \n", candidato1);
	printf(" Candidato 2 = %d voto(s) \n", candidato2);
	printf(" Candidato 3 = %d voto(s) \n", candidato3);
	printf(" Candidato 4 = %d voto(s) \n", candidato4);
	
	printf(" Votos Nulos = %d voto(s) \n", votonulo);
	printf(" Votos em Branco = %d voto(s) \n", votobranco);
	
	printf("\n A Porcentagem de votos nulos = %.2f%%\n", porcentagemnulo);
	printf("\n A Porcentagem de votos em branco = %.2f%%\n", porcentagembranco);
	
	return 0;
}
