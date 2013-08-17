#include <assert.h>

Function::Function(int tipo, double alf) {
	assert(tipo == 1 || tipo == 0); // 0: f(x), 1: e(x)
	type= tipo;
	alfa = alf;
}
float Function::f(double x) {
	if(tipo == 0) {
		return (x*x)-alfa;
	} else {
		double uno = 1.0;
		return (uno/(x*x))-alfa;
	}
} 

float Function::derivada(double x) {
	if (tipo == 0) {
		double dos = 2.0;
		return  dos* x;
	} else {
		double menosdos = -2.0;
		return (menosdos/(x*x*x));
	}
}