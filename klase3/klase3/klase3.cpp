// klase3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

class Kocka {
private:
	int visina;
	int sirina;
	int dubina;

public:
	void otvori() {
		cout << "Kocka je ovorena !" << endl;
	}
	void zatvori() {
		cout << "Kocka je zatvorena !" << endl;
	}
};

void Kocka::otvori() {
	cout << "Kocka je ovorena !" << endl;
}

void Kocka::zatvori() {
	cout << "Kocka je zatvorena !" << endl;
}

int main()
{
   
}

