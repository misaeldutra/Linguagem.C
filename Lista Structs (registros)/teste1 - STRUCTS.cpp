#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

#define TAM 50

// STRUCTS:
     // estrutura de dados Heterogêneas;
     // - Definindo novo tipo de dado
           // typedef
     // - Declarando váriáveis de novo tipo;
     // - Acessando membros de uma váriavel STRUCT

	
	//EX:
	
	struct tipo_pessoa{
		int idade; 
		float peso;
		char nome[TAM];
	};
	
	typedef struct tipo_pessoa tipo_pessoa;
	
	int main(){
	setlocale(LC_ALL,"Portuguese");
	
	//Criando e inicializando
	tipo_pessoa pes = {0, 0.0, "Teste"};
	
	printf("Inicio:\n");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %.2f\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome);
	
	//Atribuindo valores aos campos
	pes.idade = 10;
	pes.peso = 99.99;
	strcpy(pes.nome, "Testo");
	
	printf("\nAlterando os campos via código:\n");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %.2f\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome);
	
	
	
	
	
	
	
	
	
	
	return 0;
}
