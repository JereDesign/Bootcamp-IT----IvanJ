#include "pch.h"
#include "klase.h"

void Zivotinja::ugrozenost() {
	if (broj < 100) {
		cout << vrsta << " je ugrozena vrsta!" << endl;
	}
	else {
		cout << vrsta << " nije ugrozena vrsta!" << endl;
	}
}