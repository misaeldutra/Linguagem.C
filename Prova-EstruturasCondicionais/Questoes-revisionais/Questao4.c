#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float hsemanal, extras = 0, htrabalhadas, salarioh, salariototal;
	
	printf("Digite o número de horas trabalhadas no mês: \n");
	scanf("%f", &htrabalhadas);
	
	printf("Digite o salario por hora: \n");
	scanf("%f", &salarioh);
	
	hsemanal = htrabalhadas/4;
	
	float salario = hsemanal*salarioh;
	
	if(hsemanal > 40){
		extras = hsemanal - 40;
		salariototal = salario + (extras*salarioh*1.5);
	} else {
		salariototal = salario;
	}
	
	printf("O salário total do funcionário é de R$ %.2f.", salariototal);
	
	
	
	return 0;
}
