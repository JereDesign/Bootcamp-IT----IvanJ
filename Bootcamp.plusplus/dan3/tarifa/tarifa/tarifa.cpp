
#include "pch.h"
#include <iostream>

using namespace std;

int main() {
	int megabajti = 0;
	int mjeseci;
	int potroseni_megabajti;
	int ostatak_megabajta = 0;

	cin >> megabajti; // unesi broj megabajta koje ces dobiti svaki mjesec
	cin >> mjeseci;   // koliko mjeseci ces imati tarifu


	for (int i = 0; i < mjeseci; i++) {
		cin >> potroseni_megabajti; // koliko megabajta si potrosio
		ostatak_megabajta += (megabajti - potroseni_megabajti); // ostatak megabajta 

	}
	cout << ostatak_megabajta + megabajti;


	return 0;
}