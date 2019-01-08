#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Automobili {
private:
	string marka;
	string model;
	int brojSasije;
public:
	// GETERI
	string GetMarka();
	string GetModel();
	int GetBrojSasije();
	// SETERI
	void SetMarka(string marka);
	void SetModel(string model);
	void SetBrojSasije(int brojSasije);
};