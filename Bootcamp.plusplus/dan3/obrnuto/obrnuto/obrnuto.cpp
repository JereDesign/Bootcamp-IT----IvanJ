// obrnuto.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main() {

	int broj;
	cin >> broj;

	for (int i = broj; i > 0; i--) {
		cout << i << endl;
	}

	return 0;
}