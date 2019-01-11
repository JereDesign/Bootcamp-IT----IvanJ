// bankomat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Korisnik {
private:
	string username, name;
	//string register_username , register_password;
	//string in_username, in_password;
	//bool is_login;
	//Racun tekuci;

public:
	//void registracija();
	//void login();
	void set_username(string name);
	string get_username();
	void set_name(string pass);
	string get_name();

};

void Korisnik::set_username(string name) {
	cout << "Unesite username:" << endl;
	string username;
	cin >> name;
	username = name;
}
string Korisnik::get_username() {
	return username;
}

void Korisnik::set_name(string na) {
	cout << "Unesite ime:" << endl;
	string name;
	cin >> na;
	name = na;
}

string Korisnik::get_name() {
	return name;
}

/*void Korisnik::registracija() {

	cout << "Registracija" << endl;
	ofstream korisnik("registration.txt" , ios::out | ios::app);
	cin.ignore();
	cout << "Unesite username:" << endl;
	getline(cin, register_username);
	cout << "Unesite password:" << endl;
	getline(cin, register_password);
	korisnik << register_username << "\t" << register_password << "\n" << endl;
	korisnik.close();


	
}*/

/*void Korisnik::login() {

	cout << "Login" << endl;
	ifstream korisnik("registration.txt");

	cout << "Unesite username:" << endl;
	cin >> in_username;
	cout << "Unesite password:" << endl;
	cin >> in_password;

	if (in_username == username && in_password == password) 
	{
		cout << "Uspjesno ste se ulogirali..." << endl;
		cout << "Dobrodosli " << username << endl;
	}
	else 
	{
		cout << "Username ili password su netocni" << endl;
	}

}*/

class Racun {

private:
	void set_stanje(int broj);
	int get_stanje(int broj);

public:
	void set_isplata(int broj);
	void set_uplata(int broj);
	void isplata();
};


void Racun::set_isplata(int broj) {
	stanje -= broj;
}

void Racun::set_uplata(int broj) {
	stanje += broj;
}


void Racun::isplata() {
	cout << "Koliko novca zelite?" << endl;
	int x;
	cin >> x;
	set_isplata(x);
}



int main()
{
	cout << "---------Dobrodosli na bankomat ----------" << endl;
	cout << "1. registracija" << endl;
	cout << "2. login" << endl;
	cout << "3. izlaz" << endl;
	int izbor;
	cin >> izbor;

	Korisnik prvi;

	do
	{
		switch (izbor)
		{
		case 1:
			prvi.registracija();
			system("cls");
			main();
			break;
		case 2:
			prvi.login();
			break;
		case 3:
			break;
		default:
			break;
		}
	} while (izbor != 3);
 
}
