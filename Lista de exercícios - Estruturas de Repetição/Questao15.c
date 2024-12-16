#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// a questao pede 23 jogadores e 40 tims. porem, para testar usaremos apenas o exemplo de 3 jogadores e 2 times;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, idade, jogador, idadetotal = 0, time;
	float peso, pesototal = 0;
	float pesomedio_time,  pesomedio_campeonato,  pesototal_campeonato;
	int idademedia_time, idademedia_campeonato, idadetotal_campeonato;
	
	for(time = 1; time <= 2; time++){
		
		printf("Informe os dados do Time %d:\n ", time);
		
		for (jogador = 1; jogador <= 3; jogador++){
			
			printf(" Jogador %d - Idade = ", jogador);
			scanf("%d", &idade);
			printf(" Jogador %d - Peso = ", jogador);
			scanf("%f", &peso);
			
			pesototal = pesototal + peso;
			idadetotal = idadetotal + idade;
		}
		
		pesomedio_time = pesomedio_time / 3; //23 jogadores
		idademedia_time = idadetotal / 3; // 23 jogadores
		
		printf(" \n Time %d - Peso Médio = %.2f, Idade Média = %d \n\n ", time, pesomedio_time, idademedia_time );
		
		
		pesototal_campeonato = pesototal_campeonato + pesototal;
		idadetotal_campeonato = idadetotal_campeonato + idadetotal;
		
	}
	
		pesomedio_time = pesototal / (2 * 3); // Vai ser o número de Times vezes o numero de jogadores por time; no caso seria 40/23;
		
		idademedia_campeonato = idadetotal / (2 * 3);
		
		
		printf(" O Peso Médio de todos os jogadores particpantes = %.2f\n", pesomedio_campeonato);
		
		printf(" A Idade Média de todos os jogadores participantes = %d\n", idademedia_campeonato);
	
	
	
	return 0;
}
