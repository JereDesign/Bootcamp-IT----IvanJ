

#include "pch.h"
#include <iostream>

using namespace std;

int main() {

	int N; // ulaznice za odrasle
	int M; // ulaznice za djecu
	int A; // odrasle osobe
	int B; // djeca

	cin >> N >> M >> A >> B;

	if ((N + M) > (A + B)) {
		cout << A + B;
	}
	else if ((N + M) <= (A + B)) {
		cout << N + M;
	}

	return 0;
}