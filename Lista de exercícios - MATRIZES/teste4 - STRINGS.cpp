#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define N 50

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//ex: strcat
	
	char s1[N] = {"Lógica de"};
	char s2[N] = {" Programação!"};
	
	printf("Antes do strcat:\n");
	printf("str1: %s\n", s1);
	printf("str2: %s\n", s2);
	
	strcat(s1,s2); //imendar as duas strings e jogar no s1, de maneira fácil;
	
	printf("Depois do strcat:\n");
	puts(s1);
	
	
	
	return 0;
}
