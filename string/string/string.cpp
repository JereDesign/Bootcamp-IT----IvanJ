// string.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{	
	/*
	string ip = "";
	cout << "Unesi ime: ";
	getline(cin, ip);
	cout << ip << endl;
	*/

	string a1 = "welcome";
	string a2 = "w3resource";
	string ubacivanje = " ubacivanje ";
	string recenica = "";

	cout << "Velicina stringa a1 je " << a1.size() << endl;
	cout << "Znak na poziciji 3 je " << a1.at(3) << endl;
	cout << "Da li je string prazan? " << a1.empty() << endl;
	cout << "4 znak os 3. indeksa je - " << a1.substr(3, 4) << endl;
	cout << "Zamijeniti come sa went u a1: " << a1.replace(3, 4, "went") << endl;
	cout << "Dodaj string na kraj drugog: " << a1.append(a2) << endl;
	cout << "Dubaci string na 3. indeks " << a2.insert(3, ubacivanje) << endl;
	cout << "Upisi recenicu: ";
	getline(cin, recenica);
	cout << recenica << endl;




}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
