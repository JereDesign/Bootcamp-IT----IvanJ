// Zadatak2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
	/*
	int a = 0;
	int b = 0;

	cout << "Unesite prvi broj: ";
	cin >> a;
	cout << "UNesite drugi broj: ";
	cin >> b;

	cout << "Zbroj je - " << a + b << endl;
	cout << "Razlika je - " << a - b << endl;
	cout << "Produkt je - " << a * b << endl;
	cout << "Kvocijent je - " << setprecision(2) << fixed << (float)a / b << endl;
	*/

	int a = 0;

	cout << "Unesite peteroznamenkasti broj: ";
	cin >> a;
	cout << a << endl;

	cout << a % 10 << " jedinica" <<  endl;
	cout << (a % 100) / 10 << " desetica" << endl;
	cout << (a % 1000) / 100 << " stotica" << endl;
	cout << (a % 10000) / 1000 << " tisucica" << endl;
	cout << (a % 100000) / 10000 << " milion" << endl;
	

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
