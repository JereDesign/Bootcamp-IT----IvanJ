// rekurzije.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

// Zadatak 1
void manji_prema_vecem(int broj) {
	cout << broj << endl;
	broj++;
	if (broj < 10) {
		manji_prema_vecem(broj);
	}
}

// Zadatak 2
void veci_prema_manjem(int broj) {
	broj++;
	if (broj < 10) {
		veci_prema_manjem(broj);
	} 
	cout << broj << endl;
}

// Zadatak 3
void beskonacna(int broj) {
	cout << broj;
	broj++;
	if (broj > 1) {
		beskonacna(broj);
	}
}

// Zadatak 4
void faktorijela(int broj) {
	int a;
	int b;
	int zbroj;
	if (broj <= broj) {
		faktorijela(broj);
	}
	
}

// Zadatak 5
void fibonaci(int broj) {
	int a = 0;
	int b = 1;
	int fibo = a + b;
	int fibo = 
}

int main()
{
	//manji_prema_vecem(1);
	//veci_prema_manjem(0);
	//beskonacna(2);
	//faktorijela(7);
}

