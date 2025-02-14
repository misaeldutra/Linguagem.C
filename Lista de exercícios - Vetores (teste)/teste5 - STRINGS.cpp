#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

#define N 50

// estudar para a prova;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	// ex: strlen
	
	char s[N];
	int i;
	
	printf("Digite um texto:\n");
	gets(s); // fazer leitura; lembrando q o gets não limita o número de caracteres dentro de uma strings;
	i = strlen(s); //contar quantos caracteres tem em "s", e jogar o numero em i, para imprimir;
	printf("\nO tamanho do texto: %d\n\n", i);
	
	printf("Impressão de posição a posição: \n");
	for(i = 0; i < strlen(s); i++){ // poderiamos colocar simplismente o puts(s);
		printf("%c", s[i]); //%c para um caractere individual, ou seja, contar posição a posição;
	}
	
	
	
	
	return 0;
}
