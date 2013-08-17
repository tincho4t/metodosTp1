#include "Function.h"
#include <math.h>
#include <assert.h> 

Newton::Newton (Function fun){
	f = fun;
}

double Newton::calcular(double alfa) {
	double xn_1 = calcularPuntoInicial(); 
	double xn = Xn(xn_1);
	int i=0;
	while(i< 10000) {
		xn_1 = xn; ///Me guardo el xn-1 para poder definir otro criterio de parada mas inteligente.
		xn = Xn(xn);
		i++;
	}
	return xn_1;

}

double Newton::Xn(double x){
	return x - (f.f(x)/f.derivada(x));
}

double calcularPuntoInicial() {
	
	double res;
	int d = 0;
	assert(numero >= 0);
	if(numero == 0) {
		return 0.0;
	} else if(numero > 1) {
		for(long aux = (long) numero; aux/10 > 0;d++,aux = aux/10); 
		
		if(d%2 == 0) {
			res = pow(10,d/2)*2;
		} else {
			res = pow(10,d/2)*6;
		}
	} else {
		for(double aux = numero; aux*10 < 1;d++,aux = aux*10.0)
		d++; ///TODO: Analizar si ese d++ tiene sentido y PORQUE...
		if(d%2 == 0) {
			res = (1/pow(10,d/2))*2;
		} else {
			res = (1/pow(10,d/2))*6;
		}
	}
	return res;
}