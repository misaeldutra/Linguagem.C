#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[10][30];
	float notas[10][4];
	int quantidade = 0;
	int opcao = 0;
	int i;
	int x;
	
	printf("\nCADASTRO DOS ALUNOS E AS NOTAS:\n");
	printf("OBS: INFORME 'Finalizar' SE FOR FINALIZAR O PROGRAMA");
	
	while (1) {
		printf("\n\nInforme o nome do aluno: ");
		scanf("%[^\n]", nome[quantidade]);
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
	
	//opções de escolhas
	while(opcao != 6){
		printf(" ----- OPÇÕES -----\n");
		
		printf("1 - Calcular a média de um aluno escolhido pelo usuário\n");
		printf("2 - Listar todos os alunos e suas médias\n");
		printf("3 - Listar somente os alunos aprovados (média >= 7)\n");
		printf("4 - Listar somente os alunos em final (média >=5 e média <7)\n");
		printf("5 - Listar somente os alunos reprovados (média < 5)\n");
		printf("6 - Sair\n");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				{
					char aluno[30];
					float soma = 0;
					int i, localizou = 0;
					printf("\nQual o nome do aluno?");
					scanf("%[^\n]", aluno);
					
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
					
					break;
				}
			case 2:
				{
					float soma;
					
					printf("\nAlunos e suas médias:\n");
					for(i = 0; i < quantidade; i++){
						soma = 0;
						for( x = 0; x < 4; x++){
							soma = soma + notas[i][x];
						}
						printf("%s média %.2f\n", nome[i], soma/4);
					}
					break;
				}
			case 3:
				{
					float soma;
					int localizou = 0;
					
					printf("\nAlunos AROVADOS:\n");
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
					break;
				}
			case 4:
				{
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
					break;
				}
			case 5:
				{
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
					break;
				}
			case 6:
				printf("SAINDO DO SISTEMA!\n");
			}
		}
	
		
	return 0;
}
