

#include "pch.h"
#include <iostream>

using namespace std;

int main() {

	int N;
	cin >> N;

	if ((N % 10) > ((N % 1000) / 100 )) {
		cout << "DESNI NAGIB";
	}
	else if ((N % 10) < ((N % 1000) / 100)) {
		cout << "LIJEVI NAGIB";
	}
	else {
		cout << "RAVNOTEZA";
	}

	return 0;
}