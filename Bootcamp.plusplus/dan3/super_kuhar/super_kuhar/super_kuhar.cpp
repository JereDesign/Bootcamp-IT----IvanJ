// super_kuhar.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main() {

	int ocjenaTin1, ocjenaTin2, ocjenaTin3;
	int ocjenaEdi1, ocjenaEdi2, ocjenaEdi3;
	int zbrojTin = 0;
	int zbrojEdi = 0;

	for (int i = 0; i < 3; i++) {
		cin >> ocjenaEdi1 >> ocjenaEdi2 >> ocjenaEdi3;
		zbrojEdi += ocjenaEdi1 + ocjenaEdi2 + ocjenaEdi3;
	}
	for (int i = 0; i < 3; i++) {
		cin >> ocjenaTin1 >> ocjenaTin2 >> ocjenaTin3;
		zbrojTin += ocjenaTin1 + ocjenaTin2 + ocjenaTin3;
	}

	if (zbrojEdi > zbrojTin) {
		cout << "Edi " << zbrojEdi << endl;
	}
	else if (zbrojEdi < zbrojTin) {
		cout << "Tin " << zbrojTin << endl;
	}
	else {
		cout << "Nema pobjednika" << zbrojTin << endl;
	}
	
	return 0;
}