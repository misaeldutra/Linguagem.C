#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float hsemanal, salarioh, htrabalhada, extras = 0, stotal;
	
	printf("Informe o n�mero de horas trabalhadas no m�s: \n");
	scanf("%f", &htrabalhada);
	printf("Informe o sal�rio por hora: \n");
	scanf("%f", &salarioh);
	
	hsemanal = htrabalhada/4;
	
	float salario = hsemanal*salarioh;
	
	if(hsemanal>40){
		extras = hsemanal - 40;
		stotal = salario + (extras*salarioh*1.5);
	} else{
		stotal = salario;
	}
	
	printf("O sal�rio total do funcion�rio � R$ %.2f.", stotal);
	
	
	
	return 0;
}
