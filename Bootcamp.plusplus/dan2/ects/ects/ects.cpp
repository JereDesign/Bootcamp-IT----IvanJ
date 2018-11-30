

#include "pch.h"
#include <iostream>

using namespace std;

int main() {

	int U; // broj upisanih ects bodova
	int P; // broj polozenih ects bodova

	cin >> U >> P;

	if (P < 30) {
		cout << 8400; // Mirko ce platit 8400 kuna
	}
	else if (P >= 30 && P < 55) {
		cout << (U - P) * 140; // Mirko ce platit P - U * 140 kuna
	}
	else {
		cout << 0; // Mirko netreba platit skolarinu
	}


	return 0;
}