
#include "pch.h"
#include <iostream>

using namespace std;

int main() {

	// Zadatak 1
	/*
	int ocjene[10];
	float prosjek = 0;

	for (int i = 0; i < 10; i++) {
		cin >> ocjene[i];
		prosjek += ocjene[i];
	} 
	prosjek = prosjek / 10;
	cout << "Prosjek je " << prosjek << endl;
	*/

	// Zadatak 2
	
	char kk[9] = { };

	for (int i = 0; i < 9; i++) {

		int polje;
		cout << "Unesi broj polja" << endl;
		cin >> polje;
		cout << "Unesi svoj znak" << endl;
		cin >> kk[polje];

		system("cls");
		cout << kk[0] << "\t|" << kk[1] << "\t|" << kk[2] << "\n";
		cout << kk[3] << "\t|" << kk[4] << "\t|" << kk[5] << "\n";
		cout << kk[6] << "\t|" << kk[7] << "\t|" << kk[8] << "\n";

		////////////// prvi igrac uvjeti
		if (kk[0] == 'x' && kk[1] == 'x' && kk[2] == 'x') {
			cout << "Igrac x je pobijedio!";
			break;
		} else if (kk[3] == 'x' && kk[4] == 'x' && kk[5] == 'x') {
			cout << "Igrac x je pobijedio!";
			break;
		}
		else if (kk[6] == 'x' && kk[7] == 'x' && kk[8] == 'x') {
			cout << "Igrac x je pobijedio!";
			break;
		}
		else if (kk[0] == 'x' && kk[3] == 'x' && kk[6] == 'x') {
			cout << "Igrac x je pobijedio!";
			break;
		}
		else if (kk[1] == 'x' && kk[4] == 'x' && kk[7] == 'x') {
			cout << "Igrac x je pobijedio!";
			break;
		}
		else if (kk[2] == 'x' && kk[5] == 'x' && kk[8] == 'x') {
			cout << "Igrac x je pobijedio!";
			break;
		}
		else if (kk[0] == 'x' && kk[4] == 'x' && kk[8] == 'x') {
			cout << "Igrac x je pobijedio!";
			break;
		}
		else if (kk[2] == 'x' && kk[4] == 'x' && kk[6] == 'x') {
			cout << "Igrac x je pobijedio!";
			break;
		}
		////////////// drugi igrac uvjeti
		if (kk[0] == 'y' && kk[1] == 'y' && kk[2] == 'y') {
			cout << "Igrac y je pobijedio!";
			break;
		}
		else if (kk[3] == 'y' && kk[4] == 'y' && kk[5] == 'y') {
			cout << "Igrac y je pobijedio!";
			break;
		}
		else if (kk[6] == 'y' && kk[7] == 'y' && kk[8] == 'y') {
			cout << "Igrac y je pobijedio!";
			break;
		}
		else if (kk[0] == 'y' && kk[3] == 'y' && kk[6] == 'y') {
			cout << "Igrac y je pobijedio!";
			break;
		}
		else if (kk[1] == 'y' && kk[4] == 'y' && kk[7] == 'y') {
			cout << "Igrac y je pobijedio!";
			break;
		}
		else if (kk[2] == 'y' && kk[5] == 'y' && kk[8] == 'y') {
			cout << "Igrac y je pobijedio!";
			break;
		}
		else if (kk[0] == 'y' && kk[4] == 'y' && kk[8] == 'y') {
			cout << "Igrac y je pobijedio!";
			break;
		}
		else if (kk[2] == 'y' && kk[4] == 'y' && kk[6] == 'y') {
			cout << "Igrac y je pobijedio!";
			break;
		}
	}

	


	return 0;
}