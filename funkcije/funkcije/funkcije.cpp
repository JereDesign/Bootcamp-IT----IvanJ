// funkcije.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;


// Zadatak 1
// Napiši program (u funkciji) koji će ispisati tekst pjesme 99 bottles of beer on the wall.

void bottles() {
	for (int i = 100; i > 0; i--) {
		cout << i << " bottles of beer on the wall," << i << " bottles of beer.\nTake one down and pass it around, " << i - 1 << " bottles of beer on the wall." << endl << endl;
	}
}


// Zadatak 2 
/* Napiši program (u funkciji) koji će zbrajati brojeve jednog za drugim kako ih korisnik bude upisivao i 
ispisivati njihov zbroj (dok korisnik ne unese 0).*/

int zbrajanje(int broj1, int broj2) {
	
	return broj1 + broj2;
}

int main() {

	//bottles();
	zbrajanje();

	return 0;
}

