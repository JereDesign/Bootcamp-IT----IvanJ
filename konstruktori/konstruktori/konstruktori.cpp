// konstruktori.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "head.h"
#include <string>

using namespace std;

int main()
{
	string marka, model;
	int brojSasije;
	cout << "Unesite marku automobila" << endl;
	cin >> marka;
	cout << "Unesite model automobila" << endl;
	cin >> model;
	cout << "Unesite broj sasije" << endl;
	cin >> brojSasije;
	

	Automobili auto1;
	auto1.SetMarka(marka);
	auto1.SetModel(model);
	auto1.SetBrojSasije(brojSasije);
	cout << auto1.GetMarka() << " " << auto1.GetModel() << ", broja sasije " << auto1.GetBrojSasije() << endl;
	
	
	
}
