
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main() {

	// Zadatak 1
	/*
	int A = 0;
	int B = 0;
	
	do {
		cin >> A;
		B += A;
	} while (A != 0);
	cout << B;
	*/


	// Zadatak 2
	/*
	int lozinka = 1234;
	int upisi_lozinku;

	for (int i = 0; i < 3; i++) {
		cin >> upisi_lozinku;
		if (upisi_lozinku != lozinka) {
			cout << "Kriva lozinka..pokusaj ponovo.." << endl;
			continue;
		}
		else {
			cout << "Lozinka je tocna !";
			break;
		}
	}
	*/

	// Zadatak 3
	/*
	for (int i = 99; i > 0; i--) {
		cout << i << " bottles of beer on the wall," << i << " bottles of beer." << endl << "Take one down and pass it around, " << i-1 << " bottles of beer on the wall." << endl << "\n";
	}
	*/

	// Zadatak 4
	/*
	for (int i = 1; i < 10; i++) {
		cout << i * i << endl;
		//continue;
	}
	*/

	// Zadatak 5
	/*
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			cout << i * j << "\t";
		}
		cout << endl;
	}
	*/

	// Zadatak 6
	/*
	for (int i = 0; i < 2; i--) {
		cout << i;
	}
	*/
	return 0;
}