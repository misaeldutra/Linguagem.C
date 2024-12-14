#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float htrabalho, salarioh, salariototal, hsemanal, extras;
	

	printf("Digite o numero de horas trabalhadas no mes: ");
	scanf("%f", &htrabalho);
	
	printf("Digite o salario por hora trabalhada: ");
	scanf("%f", &salarioh);
	
	hsemanal = htrabalho/4;
	
	float salario = hsemanal * salarioh;
	
	if(hsemanal > 40){
		extras= hsemanal - 40;
		salariototal = salario + (extras*salarioh*1.5 ); //  acr�cimo de 50% nas horas extras trabalhadas 
	}else{
		salariototal = salario;
	}
	
	printf("O salario total do funcionario: R$ %.2f \n", salariototal);
	
	system("pause");
	return(0);
	
}
