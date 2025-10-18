//
// Created by cosea on 18/10/2025.
//

#include "CLuchador.h"

CLuchador::CLuchador(string _nombre, double _salud, double _ataque, double _defensa, double _bloqueo):
	mNombre(_nombre), mSalud(_salud), mAtaque(_ataque), mDefensa(_defensa), mBloqueo(_bloqueo) {}


double CLuchador::CalcularAtaque() {
	cout<<"Danio de ataque de "<<mNombre<<": "<<mAtaque<<endl;
	return mAtaque;
}


double CLuchador::CalcularDanioRecibido(double ataqueEnemigo) {
	double danioReducido = max(ataqueEnemigo - (mDefensa/4) , 2.0);
	cout<<"Danio reducido por: "<<mNombre<<": "<<danioReducido<<endl;
	int probabilidad = rand() % 100 + 1; //1-100
	double probabilidadFinal = probabilidad / 100.0; //0.99 0.15 0.18 1.0
	bool bloqueoActivado = false;
	if (probabilidadFinal <= mBloqueo) {
		danioReducido *= 0.2; //bloqueo exitoso danioReducido = danioReducido * 0.2
		bloqueoActivado = true;
	}

	/*
	 if( bloqueoActivado ){asignar mensaje de bloqueo exitoso }
	 else{ asignar mensaje de danio normal }
	 Usar ese mensaje dentro del cout
	 */

	cout<<"Danio final "<<(bloqueoActivado ? "(bloqueo activado)" : "(sin bloqueo)")<<" recibido por: "<<mNombre <<" : "<<danioReducido<<endl;

	mSalud -= danioReducido;

	cout<<"Salud actual de "<<mNombre<<": "<<mSalud<<endl;

	return  danioReducido;
}

