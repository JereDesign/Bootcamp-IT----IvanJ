#include "pch.h"
#include "head.h"

using namespace std;

void Automobili::SetMarka(string marka) {
	this->marka = marka;
}
string Automobili::GetMarka() {
	return marka;
}

void Automobili::SetModel(string model) {
	this->model = model;
}
string Automobili::GetModel() {
	return model;
}

void Automobili::SetBrojSasije(int brojSasije) {
	this->brojSasije = brojSasije;
}
int Automobili::GetBrojSasije() {
	return brojSasije;
}