

#include "pch.h"
#include <iostream>

using namespace std;

int main() {

	int N;
	int A, B, C, D, E;


	cout << "Unesite kolicinu novca koju imate i cijene jela." << endl;
	cin >> N >> A >> B >> C >> D >> E;

	A = A / 2;
	B = B / 2;
	C = C / 2;
	D = D / 2;
	E = E / 2;
	

	if (N - (A + B + C) >= D) {
		cout << "PUDING OD COKOLADE !!";
	}
	else {
		cout << "PUDING OD VANILIJE !!";
	}
	
	return 0;
}