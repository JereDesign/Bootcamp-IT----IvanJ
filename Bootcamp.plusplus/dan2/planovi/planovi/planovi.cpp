
#include "pch.h"
#include <iostream>

using namespace std;

int main() {

	int A1, A2; // Datumi kad ima obaveze
	int B1, B2; // Datumi ponude za putovanja

	cout << "Ispisi sve datume: " << endl;
	cin >> A1 >> A2 >> B1 >> B2;

	// Ako je prva ponuda manja od prvog datuma obaveze, ide taj dan
	if (B1 < A1) {
		cout << "Putujes na dan:" << B1;
	}
	// Ako je prva ponuda manja od prvog datuma obaveze, ide drugi dan
	else if (B1 > A1) {
		cout << "Putujes na dan:" << B2;
	}

	return 0;
}