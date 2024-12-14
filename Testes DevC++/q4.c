#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float hsemanal, salarioh, htrabalhada, extras = 0, stotal;
	
	printf("Informe o número de horas trabalhadas no mês: \n");
	scanf("%f", &htrabalhada);
	printf("Informe o salário por hora: \n");
	scanf("%f", &salarioh);
	
	hsemanal = htrabalhada/4;
	
	float salario = hsemanal*salarioh;
	
	if(hsemanal>40){
		extras = hsemanal - 40;
		stotal = salario + (extras*salarioh*1.5);
	} else{
		stotal = salario;
	}
	
	printf("O salário total do funcionário é R$ %.2f.", stotal);
	
	
	
	return 0;
}
