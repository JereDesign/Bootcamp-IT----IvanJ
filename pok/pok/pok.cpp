#include "pch.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	int broj_pokemona;
	string ime_pokemona;
	int broj_slatkisa;			// Broj slatkisa potrebnih za evoluciju
	int mirkovi_slatkisi;		// Broj slatkisa koje Mirko posjeduje za jednog pokemona
	int X;						// Broj pokemona koje moze evoluirati
	string Y;						// Ime pokemona kojeg moze najvise puta evoluirati

	cout << "Broj pokemona: " << endl;
	cin >> broj_pokemona;

	//for (int i = 0; i < broj_pokemona; i++) {
		cout << "Ime pokemona: " << endl;
		cin >> ime_pokemona;
		cout << "Broj slatkisa potrebnih za evoluciju: " << endl;
		cin >> broj_slatkisa;
		cout << "Broj Mirkovih slatkisa za " << ime_pokemona << ": " << endl;
		cin >> mirkovi_slatkisi;
	//}
	
	/*if (mirkovi_slatkisi >= broj_slatkisa) {
		mirkovi_slatkisi - broj_slatkisa;
		mirkovi_slatkisi += 2;

	}*/
	//cout << mirkovi_slatkisi;

	return 0;
}