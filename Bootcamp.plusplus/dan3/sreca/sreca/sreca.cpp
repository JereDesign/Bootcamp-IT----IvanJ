// sreca.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main() {
	int broj_ucenika;
	int bonboni = 0;
	int sretnici = 0;
	cin >> broj_ucenika;
	

	for (int i = 1; i < broj_ucenika+1; i++) {
		cin >> bonboni;
		if (bonboni > i || bonboni == i) {
			sretnici += 1;
		}
	}
	cout << sretnici;
	return 0;
}