#include <iostream>
#include <vector>
#include <cmath>
using namespace  std;


double calcularMedia(vector<double>& numeros) {
	double suma = 0;
	for (int i = 0; i < numeros.size(); i++) {
		suma += numeros[i];
	}

	return suma / numeros.size();
}

double calcularVarianza(vector<double>& numeros) {
	double media = calcularMedia(numeros);
	double sumaTemporal = 0.0;
	for (int i = 0; i < numeros.size(); i++) {
		sumaTemporal += pow(numeros[i] - media, 2);
	}
	return sumaTemporal / (numeros.size() - 1);
}

void capturarInputs(vector<double>& numeros) {
	int n;
	cout<<"N: "<<endl;
	cin>>n;

	for (int i = 0; i < n; i++) {
		double numero;
		cout<<"i"<<i<<" : "<<endl;
		cin>>numero;
		numeros.push_back(numero);
	}

}

int main() {

	vector<double> misNumeros;

	capturarInputs(misNumeros);

	cout<<"Varianza: "<<calcularVarianza(misNumeros)<<endl;
	return 0;
}