

#include "pch.h"
#include <iostream>

using namespace std;

int main() {

	int R, S, K, D, V;

	cin >> R;
	cin >> S;
	cin >> K;
	cin >> D;
	cin >> V;

	cout << (R * S * K) - (D + V);

	return 0;
}