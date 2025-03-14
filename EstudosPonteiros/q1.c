#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int y, *p, x;
	y = 0;
	
	p = &y;
	x = *p; // logo, x = y, ou seja, x = 0;
	x = 4; // passa a ser 4
	
	(*p)++; //y = y + 1 = 1
	x--; //x = 4 - 1= 3
	(*p) += x; // *p = *p + x; *p = 1 + 3 = 4, ou seja, y = 4;
	printf();
	
	
	
	
	
	return 0;
}
