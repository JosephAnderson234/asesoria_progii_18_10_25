//
// Created by cosea on 18/10/2025.
//

#ifndef CLUCHADOR_H
#define CLUCHADOR_H
#include <iostream>

using namespace std;

class CLuchador {
	string mNombre;
	double mSalud;
	double mAtaque;
	double mDefensa;
	double mBloqueo;

public:

	CLuchador(string _nombre, double _salud, double _ataque, double _defensa, double _bloqueo);
	double CalcularAtaque();
	double CalcularDanioRecibido(double ataqueEnemigo);

};



#endif //CLUCHADOR_H
