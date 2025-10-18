//
// Created by cosea on 18/10/2025.
//
#include <iostream>
using namespace std;

//mode = l, r, u, d, dr, dl, ur, ul

bool seguirBuscando(char** matriz, int filas, int columnas, string term, string mode, int pos, int posY, int posX) {
	//declarar di, dj, segun mode,  mode: l -> di = 0, dj = -1; dr -> di = 1, dj = 1

	//verifico si el pos de mi term, (la palabra), es la misma en la matriz, si no lo es, retorno false

	//si me salgo de la matriz, retorno false

	//si pos == term.length() -1 y ese valor está dentro de la matriz, retorno true
}

pair<int, int> buscarPalabra (char** matriz, int filas, int columna, string term) {
	pair<int, int> posicion = {-1, -1};
	for (int i = 0; i < filas; i++) {
		
		for (int j = 0; j < columna; j++) {
			if (matriz[i][j] == term[0]) {

				if (i-1 >= 0 && j -1 >= 0) {
					if (matriz[i-1][j-1] == term[1]) { ///0 y 1 == check 2
						 if (seguirBuscando(matriz, filas, columna, term, "ul", 2, i-1, j-1)) {
						 	posicion = {i, j};
							 break;
						 }

					}
				}
				if (i-1 >= 0) {
					if (matriz[i-1][j] == term[1]) { ///0 y 1 == check 2
						 if (seguirBuscando(matriz, filas, columna, term, "u", 2, i-1, j)) {
						 	posicion = {i, j};
							 break;
						 }
					}
				}
				if (i-1 >= 0 && j+1 < columna) {
					if (matriz[i-1][j+1] == term[1]) { ///0 y 1 == check 2
						 if (seguirBuscando(matriz, filas, columna, term, "ur", 2, i-1, j+1)) {
						 	posicion = {i, j};
							 break;
						 }
					}
				}

				
				if (j-1 >= 0) {
					if (matriz[i][j-1] == term[1]) { ///0 y 1 == check 2
						 if (seguirBuscando(matriz, filas, columna, term, "l", 2, i, j-1)) {
						 	posicion = {i, j};
							 break;
						 }
					}
				}
				if (j+1 < columna) {
					if (matriz[i][j+1] == term[1]) { ///0 y 1 == check 2
						 if (seguirBuscando(matriz, filas, columna, term, "r", 2, i, j+1)) {
						 	posicion = {i, j};
							 break;
						 }
					}
				}

				if (i+1 < filas && j -1 >= 0) {
					if (matriz[i+1][j-1] == term[1]) { ///0 y 1 == check 2
						 if (seguirBuscando(matriz, filas, columna, term, "dl", 2, i+1, j-1)) {
						 	posicion = {i, j};
							 break;
						 }
					}
				}
				if (i+1 < filas) {
					if (matriz[i+1][j] == term[1]) { ///0 y 1 == check 2
						 if (seguirBuscando(matriz, filas, columna, term, "d", 2, i+1, j)) {
						 	posicion = {i, j};
							 break;
						 }
					}
				}
				if (i+1 < filas && j+1 < columna) {
					if (matriz[i+1][j+1] == term[1]) { ///0 y 1 == check 2
						 if (seguirBuscando(matriz, filas, columna, term, "dr", 2, i+1, j+1)) {
						 	posicion = {i, j};
							 break;
						 }
					}
				}
			}
		}

		return posicion;
	}
}

int main() {

	int filas, columnas;
	cout << "Ingrese el numero de filas y Columnas: ";
	cin >> filas >> columnas;

	srand(time(nullptr));
	char** matriz = new char*[filas];
	for (int i = 0; i < filas; i++) {
		matriz[i] = new char[columnas];
	}

	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			matriz[i][j] = 'a' + rand() % 26; //0 - 25 //---> 'a' - 'z'
		}
	}

	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}

	string palabra;

	do {
		cout<< "Ingrese una palabra a buscar (o 'salir' para terminar): ";
		cin >> palabra;

		//impl funcion buscar en el array

		//condicionar el output, de acuerdo a lo que retorne la funcion buscarPalabra
		//si retorna -1, -1 -> no encontrada
		//si retorna otra cosa -> encontrada en esa posicion

	} while (palabra != "salir");

	return 0;
}