
#include "pch.h"
#include <iostream>

using namespace std;

int main() {
	int N;
	int unos;
	int rezultat = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> unos;
		rezultat += unos;
	}
	
	cout << rezultat << endl;


	return 0;
}