# include "Function.h"

class Newton {
	
public:
	Newton (Function fun);
	double calcular(double);
private:
	double calcularPuntoInicial(); // Se encarga de calcular el punto inicial. X0
	double Xn(int, double);
	Function f;
};