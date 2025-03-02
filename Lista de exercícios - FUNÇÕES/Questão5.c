#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void CadastrarAlunos (){
	char nome[10][30];
	float notas[10][4];
	int quantidade = 0;
	int opcao = 0;
	int i;
	int x;
	
	while (1) {
		printf("\n\nInforme o nome do aluno: ");
		scanf("%[^\n]" , nome[quantidade]);
		getchar();
		
		if(strcmp(nome[quantidade], "finalizar") == 0 || strcmp(nome[quantidade], "FINALIZAR") == 0 || strcmp(nome[quantidade], "Finalizar") == 0){
			break;
		}
		
		for (i = 0; i < 4; i++){
			printf("Informe a nota %d de %s: ", i + 1, nome[quantidade] );
		
		    while (scanf("%f", &notas[quantidade][i]) != 1) {
                printf("Entrada inválida! Por favor, insira um número válido para a nota %d de %s: ", i + 1, nome[quantidade]);
                while (getchar() != '\n');  // Limpa o buffer de entrada para a próxima tentativa
            }
		}
		quantidade++;
	}
	
	printf("\nALUNOS E SUAS NOTAS: \n");
	for(i = 0; i < quantidade; i++){
		printf("\nAluno %d: %s ", i + 1, nome[i]);
		for(x = 0; x < 4; x++){
			printf("N%d: %.2f", x + 1, notas[i][x]);
		}
		printf("\n");
	}
}

void exibicaodeopc (){
	printf(" ----- OPÇÕES -----\n");
		
		printf("1 - Calcular a média de um aluno escolhido pelo usuário\n");
		printf("2 - Listar todos os alunos e suas médias\n");
		printf("3 - Listar somente os alunos aprovados (média >= 7)\n");
		printf("4 - Listar somente os alunos em final (média >=5 e média <7)\n");
		printf("5 - Listar somente os alunos reprovados (média < 5)\n");
		printf("6 - Sair\n");
}

void mediaaluno(float m){
	char nome[10][30];
	float notas[10][4];
	int quantidade = 0;
	int opcao = 0;
	int i;
	int x;
					float soma = 0;
					 int localizou = 0;
					printf("\nQual o nome do aluno?");
					scanf("%[^\n]", &aluno);
					
					for(i = 0; i < quantidade; i++){
						
						if(strcmp(nome[i], aluno) == 0){
							for(x = 0; x < 4; x++){
								soma = soma + notas[i][x];
							}
							printf("\nMedia do aluno %s é %f\n", nome[i], soma/4);
							localizou = 1;
						}
					}
					if(localizou == 0){
						printf("\nAlino não encontrado!\n");
					}
}

void Listatodos( float alunomedia){
	float soma;
					
					printf("\nAlunos e suas médias:\n");
					for(i = 0; i < quantidade; i++){
						soma = 0;
						for( x = 0; x < 4; x++){
							soma = soma + notas[i][x];
						}
						printf("%s média %.2f\n", nome[i], soma/4);
					}
}

void Aprovados ( float aprovados){
	float soma;
					int localizou = 0;
					
					printf("\nAlunos APROVADOS:\n");
					for(i = 0; i < quantidade; i++){
						soma = 0;
						for( x = 0; x < 4; x++){
							soma = soma + notas[i][x];
						}
						if(soma/4 >= 7){
							printf("%s média %.2f\n", nome[i], soma/4);
							localizou = 1;
						}
					}
					if(localizou == 0){
						printf("\n Não há aluno aprovado!\n");
					}
}

void EmFinal ( float final){
	float soma;
					int localizou = 0;
					
					printf("\nAlunos  em FINAL: \n");
					for(i = 0; i < quantidade; i++){
						soma = 0;
						for( x = 0; x < 4; x++){
							soma = soma + notas[i][x];
						}
						if(soma/4 >= 5 && soma/4 < 7){
							printf("%s média %.2f\n", nome[i], soma/4);
							localizou = 1;
						}
					}
					if(localizou == 0){
						printf("\nNão há aluno em Final!\n");
					}
}

void Reprovados (float reprovados){
	float soma;
					int localizou = 0;
					
					printf("\nAlunos REPROVADOS:\n");
					for(i = 0; i < quantidade; i++){
						soma = 0;
						for( x = 0; x < 4; x++){
							soma = soma + notas[i][x];
						}
						if(soma/4 < 5){
							printf("%s média %.2f\n", nome[i], soma/4);
							localizou = 1;
						}
					}
					if(localizou == 0){
						printf("\nNão há aluno Reprovado!\n");
					}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	char nome[10][30];
	float notas[10][4];
	int quantidade = 0;
	int opcao = 0;
	int i;
	int x;
	
	printf("\nCADASTRO DOS ALUNOS E AS NOTAS:\n");
	printf("OBS: INFORME 'Finalizar' SE FOR FINALIZAR O PROGRAMA");
	
	CadastrarAlunos();
	
	exibicaodeopc();
	//opções de escolhas
	while(opcao != 6){
		
		switch(opcao){
			case 1:
				{
					mediaaluno(m);
					break;
					
				}
			case 2:
				{
					Listatodos(alunomedia);
					break;
				}
			case 3:
				{
					Aprovados(aprovados);
					break;
				}
			case 4:
				{
					EmFinal(final);
					break;
				}
			case 5:
				{
					Reprovados(reprovados);
					break;
				}
			case 6:
				printf("SAINDO DO SISTEMA!\n");
			}
		}
	
	
	
	
	return 0;
}
