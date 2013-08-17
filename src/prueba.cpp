#include <stdio.h>
#include <math.h>
#include <assert.h> 

int main() {
	double numero = 1;
	
	while(numero != 0) {
		scanf("%f",&numero);	
		
		double res;
		int d = 0;
		assert(numero >= 0);
		if(numero > 1) {
			for(long aux = (long) numero; aux/10 > 0;d++,aux = aux/10); 
			
			if(d%2 == 0) {
				res = pow(10,d/2)*2;
			} else {
				res = pow(10,d/2)*6;
			}
		} else {
			for(double aux = numero; aux*10 < 1;d++,aux = aux*10.0)

			d++;
			if(d%2 == 0) {
				res = (1/pow(10,d/2))*2;
			} else {
				res = (1/pow(10,d/2))*6;
			}
		}


		printf("res aprox:  %f\n", res);
		printf("res exacto: %f\n", sqrt(numero));
	}
	

	
}