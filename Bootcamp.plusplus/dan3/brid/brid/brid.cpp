#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int zbroj = 0;
	char unos;
	int broj_dje;

	//cout << "Unesite koliko dijeljenja zelite: " << endl;
	cin >> broj_dje;
	//cout << broj_dje;

	for (int i = 0; i < broj_dje; i++) {
		for (int j = 0; j < 13; j++) {
			//cout << "Unesite znak karte: ";
			cin >> unos;
			if (unos == 'A') {
				zbroj += 4;
			}
			else if (unos == 'K') {
				zbroj += 3;
			}
			else if (unos == 'Q') {
				zbroj += 2;
			}
			else if (unos == 'J') {
				zbroj += 1;
			}
			else if (unos == 'X') {
				zbroj += 0;
			}
			else {
				zbroj += 0;
			}
		}
		cout << zbroj;
	}

}