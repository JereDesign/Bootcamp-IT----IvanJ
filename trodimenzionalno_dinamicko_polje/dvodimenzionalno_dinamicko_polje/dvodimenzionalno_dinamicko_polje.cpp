// dvodimenzionalno_dinamicko_polje.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;


void trodimenzionalnoPolje()
{
	int x, y, z;
	cout << "Unesite velicine polja: ";
	cin >> x >> y >> z;

	int ***p_p_polje = new int **[x];

	for (int i = 0; i < x; i++) {
		p_p_polje[i] = new int*[y];
		for (int j = 0; j < y; j++) {
			p_p_polje[i][j] = new int[z];
			for (int k = 0; k < z; k++) {
				p_p_polje[i][j][k] = i + j + k;
			}
		}
	}

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			for (int k = 0; k < z; k++) {
				cout << p_p_polje[i][j][k] << "\t";
			}
			cout << endl;
		}
		cout << endl << endl;
	}

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++) {
			delete p_p_polje[i][j];
		}
		delete p_p_polje[i];
	}
	delete p_p_polje;
	p_p_polje = nullptr;
}
int main() {
	trodimenzionalnoPolje();

	return 0;
}