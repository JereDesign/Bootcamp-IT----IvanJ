
#include "pch.h"
#include <iostream>

using namespace std;

int main() {

	float a, b, c, d, e;

	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;

	cout << setprecision(2) << fixed << float(a + b + c + d + e) / 5;

	return 0;
}