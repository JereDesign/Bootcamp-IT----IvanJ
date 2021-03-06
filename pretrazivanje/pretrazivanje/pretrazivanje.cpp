// pretrazivanje.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int pretrazivanje(int broj);

int main()
{	
	// Zadatak 1
	int broj;
	cout << "Upisite jedan broj od 1 do 100" << endl;
	cin >> broj;

	int x = pretrazivanje(broj);

	if (x == -1) {
		cout << "Broj nije pronaden";
	}
	else {
		cout << "Vas broj je: " << x << endl;
	}


}

int pretrazivanje(int broj) {

	int start = 0;
	int kraj = 100;
	int sredina = (start + 100) / 2;

	while (start <= kraj && sredina != broj) {		
		if (sredina < broj) {
			start = sredina + 1;
		}
		else {
			kraj = sredina -1;
		}
		sredina = (start + kraj) / 2;
	}

	if (sredina == broj) {
		return sredina;
	}
	else {
		return -1;
	}
}