#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int y;
	y = 0;
	
	p = &y;
	x = *p;
	x = 4;
	
	(*p)++;
	x--;
	(*p) += x;
	printf();
	
	
	
	
	
	return 0;
}
