

#include "pch.h"
#include <iostream>

using namespace std;

int main() {

	
	int N;
	cin >> N;

	if (N < 9000) {
		cout << N + 1000;
	}
	else if (N < 9900) {
		cout << N + 100;
	}
	else if (N < 9990){
		cout << N + 10;
	}
	else if (N < 9999) {
		cout << N + 1;
	}
	else {
		cout << "Nepoznat broj";
	}
	return 0;
}

