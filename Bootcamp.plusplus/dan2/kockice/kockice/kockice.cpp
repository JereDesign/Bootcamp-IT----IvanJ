

#include "pch.h"
#include <iostream>

using namespace std;

int main() {

	int M;
	int S;
	int M_novi;
	int S_novi;
	
	cin >> M;
	cin >> S;

	/*
	if (M == 1) {
		M_novi = 6;
	}
	else if (M == 2){
		M_novi = 5;
	}
	else if (M == 3) {
		M_novi = 4;
	}
	else if (M == 4) {
		M_novi = 4;
	}
	else if (M == 5) {
		M_novi = 5;
	}
	else if (M == 6){
		M_novi = 6;
	}
	else {

	}

	if (S == 1) {
		S_novi = 6;
	}
	else if (S == 2) {
		S_novi = 5;
	}
	else if (S == 3) {
		S_novi = 4;
	}
	else if (S == 4) {
		S_novi = 4;
	}
	else if (S == 5) {
		S_novi = 5;
	}
	else if (S == 6) {
		S_novi = 6;
	}

	if (M_novi > S_novi) {
		cout << "mirko";
	}
	else if (M_novi < S_novi) {
		cout << "slavko";
	}
	else {
		cout << "nerijeseno";
	}
	
	*/

	if (M < 4) {
		M = 7 - M;
	} 
	if (S < 4) {
		S = 7 - S;
	}

	if (M > S) {
		cout << "mirko";
	}
	else if (M < S) {
		cout << "slavko";
	}
	else {
		cout << "nerijeseno";
	}

	return 0;
}