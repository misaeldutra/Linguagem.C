#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

#define N 50

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	//ex: strcmp 
	
	char hardText[N] = {"/exit"};
	char senha_usr[N];
	int ok;
	
	printf("Digite um texto:\n");
	gets(senha_usr);
	
	ok = strcmp(hardText, senha_usr); // comparação das duas strings;
	
	if(ok == 0){ 
		printf("Textos iguais.\n");
	} else{
		printf("Textos diferentes.\n");
	}
	
	
	
	
	return 0;
}
