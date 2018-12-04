// joker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

	int brojevi[6] = {};
	int joker[6] = {};
	int joker_listici[3][6] = {};
	int listic;

	for (int i = 0; i < 6; i++) {
		cin >> brojevi[i];
		joker[i] += (brojevi[i] % 10);
		
	}
	for (int i = 0; i < 3; i++) {
		cin >> listic;
		joker_listici[i][0] = listic / 100000;
		joker_listici[i][1] = listic % 100000 / 10000;
		joker_listici[i][2] = listic % 100000 % 10000 / 1000;
		joker_listici[i][3] = listic % 100000 % 10000 % 1000 / 100;
		joker_listici[i][4] = listic % 100000 % 10000 % 1000 % 100 / 10;
		joker_listici[i][5] = listic % 100000 % 10000 % 1000 % 100 % 10;
	}
	for (int i = 0; i < 3; i++) {
		if ((joker[5] != joker_listici[i][5] || joker[4] != joker_listici[i][4])
			|| (joker[5] != joker_listici[i][5] && joker[4] != joker_listici[i][4])) {
			cout << "Nedobitan" << endl;
		}
		else if (joker[3] != joker_listici[i][3] && joker[5] == joker_listici[i][5] && joker[4] == joker_listici[i][4]) {
			cout << "V.vrsta" << endl;
		}
		else if (joker[2] != joker_listici[i][2] && joker[3] == joker_listici[i][3] && joker[5] == joker_listici[i][5]
			&& joker[4] == joker_listici[i][4]) {
			cout << "IV.vrsta" << endl;
		}
		else if (joker[1] != joker_listici[i][1] && joker[2] == joker_listici[i][2] && joker[3] == joker_listici[i][3]
			&& joker[5] == joker_listici[i][5] && joker[4] == joker_listici[i][4]) {
			cout << "III.vrsta" << endl;
		}
		else if (joker[0] != joker_listici[i][0] && joker[1] == joker_listici[i][1] && joker[2] == joker_listici[i][2]
			&& joker[3] == joker_listici[i][3] && joker[5] == joker_listici[i][5] && joker[4] == joker_listici[i][4]) {
			cout << "II.vrsta" << endl;
		}
		else if (joker[0] == joker_listici[i][0] && joker[1] == joker_listici[i][1] && joker[2] == joker_listici[i][2]
			&& joker[3] == joker_listici[i][3] && joker[5] == joker_listici[i][5] && joker[4] == joker_listici[i][4]) {
			cout << "I.vrsta" << endl;
		}



	}
	return 0;
}