

#include "pch.h"
#include <iostream>

using namespace std;

int main() {
	int N;
	int unos;
	int suma = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> unos;
		suma += unos;
	}
	cout << suma << endl;
	return 0;
}