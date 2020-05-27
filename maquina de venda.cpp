#include <stdio.h>
#include <math.h>
#include <locale.h>

int main () 
{	
	double v,t = 0.0;
	while( t < 0.45){
		printf("Insira o valor da moeda:\n");
		scanf("%lf", &v);
		if (v == 0.10 || v == 0.25){	
			t = t + v;
		}
		else {	
			printf("Valor da moeda não valido\n");
		}
		if (t >= 0.45){
			printf("retire sua coca cola\n");
		}
	}	
}
