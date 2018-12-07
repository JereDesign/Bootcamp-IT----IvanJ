// brid2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {

	int broj_dijelj;
	vector<char> niz_karata;
	int zbroj = 0;

	cin >> broj_dijelj;

	for (int i = 0; i < broj_dijelj * 13; i++) {
		char karta;
		cin >> karta;
		niz_karata.push_back(karta);
	}
	for (int i = 0; i < broj_dijelj * 13; i++) {
		if (niz_karata[i] == 'A') {
			zbroj += 4;
		}
		else if (niz_karata[i] == 'K') {
			zbroj += 3;
		}
		else if (niz_karata[i] == 'Q') {
			zbroj += 2;
		}
		else if (niz_karata[i] == 'J') {
			zbroj += 1;
		}
		else if (niz_karata[i] == 'X') {
			zbroj += 0;
		}
		else {
			zbroj += 0;
		}
	}
	cout << zbroj;


	return 0;
}