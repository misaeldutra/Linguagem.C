#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	char nome[70];
	float nota[4];
	float soma = 0, media = 0;
	int i;
	
	printf("Informe o nome do aluno:\n");
	fgets(nome, 70, stdin);
	fflush(stdin);
	
	for(i = 0; i < 4; i++){ //para ler as 4 notas do aluno;
		printf("Informe a nota %d\n: ", i+1);
		scanf("%f", &nota[i]);
		soma = soma + nota[i];
	}
	
	media = soma/4;
	
	printf("\nAluno: %s", nome);
	printf("Média: %.2f\n", media);
	
	if(media >= 7.0){
		printf("Aprovado!\n");
	} else if(media < 4.0){
		printf("Reprovado!\n");
	} else{
		printf("Recuperação!\n");
	}
	
	
	
	
	return 0;
}
