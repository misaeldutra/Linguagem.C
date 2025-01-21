#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// escolhi o comando WHILE porque os números de votos não é definido!
int main(){
	setlocale(LC_ALL, "Portuguese");
	int codigo, total_votos = 0, candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0, vnulo = 0, vbranco = 0;
	float porcentagem_nulo, porcentagem_branco;
	
	while(1){
		printf("Digite o código do voto: \n");
		scanf("%d", &codigo);
		
		if(codigo == 0) {
			break; // Para finalizar o programa quando digitar o 0.
		}
		
		switch(codigo){
			case 1:
				candidato1 ++;
				break;
			case 2:
				candidato2 ++;
				break;
			case 3:
				candidato3 ++;
				break;
			case 4:
				candidato4 ++;
				break;
			case 5:
				vnulo ++;
				break;
			case 6:
				vbranco ++;
				break;
			default:
				printf("  CÓDIGO INVÁLIDO! \n\n");
				continue;
		}
		
		total_votos ++;
	}
	
	porcentagem_branco = (vbranco*100)/total_votos; // para calcular a porcentagem!
	
	porcentagem_nulo = (vnulo*100)/total_votos;
	
	printf("\n RESULTADO GERAL DA VOTAÇÃO: \n\n");
	
	printf("   Candidato 1 = %d voto(s) \n", candidato1);
	printf("   Candidato 2 = %d voto(s) \n", candidato2);
	printf("   Candidato 3 = %d voto(s) \n", candidato3);
	printf("   Candidato 4 = %d voto(s) \n", candidato4);
	
	printf("   Votos nulos = %d voto(s) \n", vnulo);
	printf("   Votos em branco = %d voto(s) \n\n", vbranco);
	
    //imprimir a porcentagem:
		
	printf(" A porcentagem de votos nulos = %.2f%% \n", porcentagem_nulo);
	printf(" A porcentagem de votos em branco = %.2f%% \n", porcentagem_branco);
	
	return 0;
}
