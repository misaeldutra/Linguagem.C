#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void encontreposicao (const char* str, char letra, int* posicao, int* tam){
	int i;
	*tam = 0;
	
	for(i = 0; str[i] != '\0'; i++){
		if(str[i] == letra){
			posicao[*tam] = i;
			(*tam)++;
		}
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int tam;
	char str[101]; // esta é a string;
	char letra;
	int posicao[101];
	int i;
	
	printf("Informe uma string: \n");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0'; // para indicar o final da string;
	
	printf("Informe uma letra: ");
	scanf("%c", &letra);
	getchar();
	
	encontreposicao ( str, letra, posicao, &tam); //asteristico em int, porque significa que agora é um ponteiro para int
	
	printf("\nA string: %s\n", str);
	
	if (tam == 0) {
        printf("\nA letra '%c'informada não foi encontrada na string.\n", letra);
        
    } else{
    	
	printf("\nAs posições onde '%c' se encontra: posicão ", letra);
	for(i = 0; i < tam; i++){
		printf("%d", posicao[i]);
	}
	printf("\n");
    } 
	
	printf("\nO tamanho do vetor de posições: %d\n", tam);
	
	
	
	
	
	return 0;
}

