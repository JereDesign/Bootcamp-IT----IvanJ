// multi_polja.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main() {

	// Zadatak 1
	/*Napravite program koji će spremiti tablicu množenja u polje i ispisati ju u obliku tablice (koristite tab za razmak između 
	pojedinih vrijednosti).*/
	/*
	int tablica[10][10];

	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			tablica[i][j] = i * j;
			cout << tablica[i][j] << "\t";
		}
		cout << endl;
	}
	*/

	// Zadatak 2
	/*Napišite program koji će vrijednosti u prethodnoj tablici pomnožiti s 3 pa ih ispisati.*/
	/*int tablica[10][10];

	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			tablica[i][j] = i * j;
			cout << tablica[i][j] * 3 << "\t";
		}
		cout << endl;
	}
	*/
	// Zadatak 3
	//Napišite program koji će korisniku omogućavati unos elemenata u 3D tablicu. Ispis neka bude u obliku – Element[i][j][k] = x

	int tablica[2][2];
	
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				cout << "unesite vrijednost na poziciju [" << i << "]["  << j << "][" << k << "]" << endl;
				cin >> tablica[i][j];
				cout << tablica;
			}
		}
	}
	cout << tablica;
	/*
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << tablica[i][j];
		}
	}
	*/
	return 0;
}