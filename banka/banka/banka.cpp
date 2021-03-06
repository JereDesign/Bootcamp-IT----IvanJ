// banka.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Banka {
private:
	string ime;
	int broj_racuna;
	int stanje_racuna;
public:
	void set_ime(string x);
	string get_ime();
	void set_broj_racuna(int broj);
	int get_broj_racuna();
	void set_stanje_racuna(int broj);
	int get_stanje_racuna();
	void isplata();
	void uplata();
};

void Banka::set_ime(string x) {
	ime = x;
}

string Banka::get_ime() {
	return ime;
}

void Banka::set_broj_racuna(int broj) {
	broj_racuna = broj;
}

int Banka::get_broj_racuna() {
	return broj_racuna;
}

void Banka::set_stanje_racuna(int broj) {
	stanje_racuna = broj;
}

int Banka::get_stanje_racuna() {
	return stanje_racuna;
}

void Banka::isplata() {
	cout << "Koliko novaca zelite ?" << endl;
	int pare;
	cin >> pare;
	set_stanje_racuna(stanje_racuna - pare);
	cout << "Isplatili smo vam " << pare << " kuna" << endl;
	cout << "Vase stanje je " << get_stanje_racuna() << " kuna. Dovidenja!" << endl;
}

void Banka::uplata() {
	cout << "Koliko novaca zelite uplatiti ?" << endl;
	int pare;
	cin >> pare;
	set_stanje_racuna(stanje_racuna + pare);
	cout << "Uplatili ste " << pare << " kuna na racun" << endl;
	cout << "Vase stanje je " << get_stanje_racuna() << " kuna.Dovidenja!" << endl;
}


class Devizni_racun : public Banka {
private:
	string valuta;
public:
	void set_valuta(string val);
	string get_valuta();
	void isplata();
	void uplata();
};

void Devizni_racun::set_valuta(string val) {
	valuta = val;
}

string Devizni_racun::get_valuta() {
	return valuta;
}

void Devizni_racun::isplata() {
	cout << "1.Isplata u eurima\n2.Isplata u dolarima" << endl;
	int izbor, kolicina_para;
	cin >> izbor;

	switch (izbor) {
	case 1:
		set_valuta("€");
		cout << "Koliko eura zelite ? Tecaj je 1€ = 7kn" << endl;
		cin >> kolicina_para;
		cout << "Isplatili smo vam " << kolicina_para << " " << get_valuta() << endl;
		cout << "Stanje vaseg racuna je " << get_stanje_racuna() - kolicina_para << " " << get_valuta() << endl;
		break;
	case 2:
		set_valuta("$");
		cout << "Koliko dolara zelite ? Tecaj je 1$ = 5kn" << endl;
		cin >> kolicina_para;
		cout << "Isplatili smo vam " << kolicina_para << " " << get_valuta() << endl;
		cout << "Stanje vaseg racuna je " << get_stanje_racuna() - kolicina_para << " " << get_valuta() << endl;
		break;
	}
}

void Devizni_racun::uplata() {
	cout << "1.Uplata u eurima\n2.Uplata u dolarima" << endl;
	int izbor, kolicina_para;
	cin >> izbor;

	switch (izbor) {
	case 1:
		set_valuta("€");
		cout << "Koliko eura zelite uplatiti? Tecaj je 1€ = 7kn" << endl;
		cin >> kolicina_para;
		cout << "Uplatili smo " << kolicina_para << " " << get_valuta() << endl;
		cout << "Stanje vaseg racuna je " << get_stanje_racuna() + kolicina_para << " " << get_valuta() << endl;
		break;
	case 2:
		set_valuta("$");
		cout << "Koliko dolara zelite ? Tecaj je 1$ = 5kn" << endl;
		cin >> kolicina_para;
		cout << "Isplatili smo vam " << kolicina_para << " " << get_valuta() << endl;
		cout << "Stanje vaseg racuna je " << get_stanje_racuna() + kolicina_para << " " << get_valuta() << endl;
		break;
	}
}


class Stedni_racun : public Banka {
private:
	int kamata;
public:
	double get_kamata();
	void isplata_sa_stednog();
};

double Stedni_racun::get_kamata() {
	kamata = get_stanje_racuna() * 0.05;
	return kamata;
}

void Stedni_racun::isplata_sa_stednog() {
	cout << "Koliko godina stedite?" << endl;
	int godina;
	cin >> godina;

	if (godina >= 10) {
		cout << "Stedite vise od 10 godina i zasluzujete kamatu. Hvala vam!" << endl;
		cout << "Isplatit cemo vam " << get_stanje_racuna() + get_kamata() << " kuna" << endl;
	}
	else {
		cout << "Stedite manje od 10 godina i nazalost vam nemozemo isplatiti kamatu." << endl;
		cout << "Isplatit cemo vam " << get_stanje_racuna() << endl;
	}
}


int main()
{
	Banka jere;
	jere.set_ime("Jere");
	jere.set_broj_racuna(121212);
	jere.set_stanje_racuna(7000);

	Devizni_racun jere_devizni;
	jere_devizni.set_broj_racuna(24242424);
	jere_devizni.set_stanje_racuna(11000);

	Stedni_racun jere_stedni;
	jere_stedni.set_broj_racuna(36363636);
	jere_stedni.set_stanje_racuna(200000);


	cout << "Dobrodosli u banku gospodine " << jere.get_ime() << endl;
	cout << "Izaberite racun:\n\t1.Tekuci\n\t2.Devizni\n\t3.Stedni" << endl;

	int izbor;
	cin >> izbor;
	do {
		switch (izbor) {
		case 1:
			system("cls");
			cout << "Dobrodosli " << jere.get_ime() << ", ovo je vas tekuci racun" << endl;
			cout << "Broj vaseg racuna je: " << jere.get_broj_racuna() << endl;
			cout << "Odaberite:\n\t1.Uplata\n\t2.Isplata\n\t3.Stanje" << endl;
			cin >> izbor;
			switch (izbor) {
			case 1:
				jere.uplata();
				break;
			case 2:
				jere.isplata();
				break;
			case 3:
				cout << "Vase stanje je: " << jere.get_stanje_racuna() << endl;
				break;
			}
			system("PAUSE");
			system("cls");
			main();
			break;
		case 2:
			system("cls");
			cout << "Dobrodosli " << jere_devizni.get_ime() << ", ovo je vas devizni racun" << endl;
			cout << "Broj vaseg racuna je: " << jere_devizni.get_broj_racuna() << endl;
			cout << "Odaberite:\n\t1.Uplata\n\t2.Isplata\n\t3.Stanje" << endl;
			cin >> izbor;
			switch (izbor) {
			case 1:
				jere_devizni.uplata();
				break;
			case 2:
				jere_devizni.isplata();
				break;
			case 3:
				cout << "Vase stanje je: " << jere_devizni.get_stanje_racuna() << " " << jere_devizni.get_valuta() << endl;
				break;
			}
			system("PAUSE");
			system("cls");
			main();
			break;
		case 3:
			system("cls");
			cout << "Dobrodosli " << jere_stedni.get_ime() << ", ovo je vas stedni racun" << endl;
			cout << "Broj vaseg racuna je: " << jere_stedni.get_broj_racuna() << endl;
			cout << "Odaberite:\n\t1.Uplata\n\t2.Isplata\n\t3.Stanje" << endl;
			cin >> izbor;
			switch (izbor) {
			case 1:
				jere_stedni.uplata();
				break;
			case 2:
				jere_stedni.isplata_sa_stednog();
				break;
			case 3:
				cout << "Vase stanje je: " << jere_stedni.get_stanje_racuna() << " kuna" << endl;
				break;
			}
			system("PAUSE");
			system("cls");
			main();
			break;
		}
	} while (izbor != 4);

}
