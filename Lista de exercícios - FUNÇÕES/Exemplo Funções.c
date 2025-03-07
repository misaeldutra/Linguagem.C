#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calcularSalRec(float n_horas, float sal_min){ //função e dados de entrada;
	float horas_trab, sal_brt, imp, sal_rec;
	
	horas_trab = sal_min / 2.0;
	
	sal_brt = n_horas * horas_trab;
	
	imp = sal_brt * 3/100;
	
	sal_rec = sal_brt - imp;
	
	return sal_rec;
}
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float horas_t, s_min, s_rec;
	
	printf("Informe o número de horas trabalhadas:\n");
	scanf("%f", &horas_t);
	printf("Informe o sálario mínimo:\n");
	scanf("%f", &s_min);
	
	s_rec = calcularSalRec(horas_t, s_min);
	
	printf("O Sálario a recebr: R$ %.2f.\n", s_rec);
	
	return 0;
}
