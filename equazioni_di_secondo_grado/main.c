#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c;
	
	printf("Inserisci i valori di a, b, c: ");
	scanf("%d%d%d",&a,&b,&c);
	
	float d = (pow(b*1.0, 2.0)) - 4.0*a*c;
	
	if (d > 0.0) {
		float x1 = (-(b*1.0)-(sqrt(d*1.0)))/(2.0*a);
		float x2 = (-(b*1.0)+(sqrt(d*1.0)))/(2.0*a);
		
		printf("\nCi sono due soluzioni reali, x1= %f, x2= %f\n",x1,x2);
	}

	else if (d == 0.0) {
		
		float x = (-b*1.0)/(2.0*a);	
		printf("\nEsiste un solo risultato reale, ed è x= %f\n",x);

	}
	else {
		printf("\nNon esistono soluzioni in campo reale!\n");
	}
	
	return 0;
}
