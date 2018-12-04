// prosti.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

	int broj = 0;
	cin >> broj;
	bool je_prost = true;

	for (int i = 2; i < sqrt(broj); i++) {
		if (broj % i == 0) {
			je_prost = false;
			break;
		}
	}
 
	if (je_prost) {
		cout << "prost" << endl;
	}
	else {
		cout << "nije prost" << endl;
	}

	return 0;
}