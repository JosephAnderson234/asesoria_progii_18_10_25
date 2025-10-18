#include "CLuchador/CLuchador.h"




int main () {
	srand(time(nullptr));
	CLuchador p1 ("Deadpool", 1000.0, 10.0, 100.0, 0.1);
	CLuchador p2 ("Wolverine", 1000.0, 12.0, 100.0, 0.1);

	//-------- Sim 1 --------
	double ataqueP1 = p1.CalcularAtaque();
	p2.CalcularDanioRecibido(ataqueP1);

	cout<<"-----------------------"<<endl;

	double ataqueP2 = p2.CalcularAtaque();
	p1.CalcularDanioRecibido(ataqueP2);

	return  0;
}
