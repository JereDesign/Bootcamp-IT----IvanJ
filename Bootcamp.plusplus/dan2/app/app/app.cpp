

#include "pch.h"
#include <iostream>

using namespace std;

int main() {

	// Igra A, prva cijena igre A, druga cijena igre A
	int AO, AC1, AC2;
	// Igra B, prva cijena igre B, druga cijena igre B
	int BO, BC1, BC2;

	// Ispis igara i njihovih cijena
	cin >> AO >> BO;
	cin >> AC1 >> AC2;
	cin >> BC1 >> BC2;

	// Uspredna dvije igre (njihovih ocjena)
	if (AO > BO) {
		// Usporedba cijena
		if (AC1 > AC2) {
			cout << AC2;
		}
		else {
			cout << AC1;
		}
	}
	else if (AO < BO) {
		if (BC1 > BC2) {
			cout << BC2;
		}
		else {
			cout << BC1;
		}
	}

	return 0;
}