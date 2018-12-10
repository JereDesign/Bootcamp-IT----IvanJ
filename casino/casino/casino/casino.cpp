// casino.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int novci = 0;
string ime = "";
int chipovi = 0;

void jednoruki_jack();
void info();
void bacanje_kockica();
void duplo_nista();


int main()
{
	int chip = 5;
	int chipovi_za_isplatu=0;
	int odabir = 9;

	cout << "------Dobrodosli u casino------" << endl;
	cout << "----------------------------------------\n------------------------------------" << endl;
	cout << "Unesite svoje ime i kolicinu novaca koje imate: " << endl;
	cin >> ime >> novci;
	info();

	do{
		
		cout << ime << " izaberite opciju: " << endl;
		cout << "1. Uplata novca (zamjena za chipove) 1 chip = 5kn" << endl
			<< "2. Isplata novca" << endl
			<< "3. Odabir igre" << endl
			<< "4. High score" << endl
			<< "5. Izlaz iz programa" << endl;
		cin >> odabir;

		switch (odabir) {
		case 1:
			// Uplata novca (zamjena za cipove) 1chip = 5kn
			cout << "Uplata novca (zamjena za chipove) 1 chip = 5kn" << endl;
			int chipovi_za_igru;
			cout << "Koliko chipova zelite ? 1 chip = 5kn" << endl;
			cin >> chipovi_za_igru;
			if (novci >= (chipovi_za_igru * chip)) {
				novci = novci - (chipovi_za_igru * chip);
				chipovi += chipovi_za_igru;
				info();
			}
			else {
				info();
				cout << "Nemate dovoljno para..." << endl;
			}
			break;
		case 2:
			cout << "Isplata novca: " << endl;
			cout << "Koliko chipova zelite unovciti? " << endl;
			cin >> chipovi_za_isplatu;
			if (chipovi_za_isplatu <= chipovi) {
				chipovi -= chipovi_za_isplatu;
				novci += chipovi_za_isplatu * 5;
				info();
			}
			else {
				info();
				cout << "Nemate toliko chipova..." << endl;
			}
			break;
		case 3:
			// Odabir igre
			info();

			cout << "Odaberite igru: " << endl;
			cout << "1. Jednoruki Jack" << endl
				<< "2.Bacanje kockica" << endl
				<< "3. Duplo ili nista" << endl;
			int odabir_igre;
			cin >> odabir_igre;

			switch (odabir_igre) {
			case 1:
				// Jednoruki Jack
				info();
				jednoruki_jack();
				break;

			case 2: 
				// Bacanje kockica
				info();
				bacanje_kockica();
				break;

			case 3:
				// Duplo ili nista
				info();
				duplo_nista();
				break;
			}


			break;
		case 4:
			// High score
			break;
		case 5:
			// Izlaz iz programa
			break;
		}
	} while (odabir != 5);

}

void info() {
	system("cls");
	cout << ime << endl;
	cout << "$ " << novci << endl;
	cout << "* " << chipovi << endl;
}

void jednoruki_jack() {
	
	int izbor;
	cout << "----- Jednoruki Jack -----" << endl;
	cout << "Jedno bacanje kosta 15 chipova...Ali mozete osvojiti 80 chipova" << endl;
	cout << "Izaberi: \n\t 1. Igraj\n\t 2. Izadi" << endl;
	cin >> izbor;

	if (chipovi >= 15) {
		if (izbor == 1) {
			srand(time(NULL));
			int ran1 = rand() % 4 + 1;
			int ran2 = rand() % 4 + 1;
			int ran3 = rand() % 4 + 1;
			int ran4 = rand() % 4 + 1;

			chipovi = chipovi - 15;

			cout << "  ---  " << ran1 << ran2 << ran3 << ran4 << "  ---  " << endl;

			if (ran1 == ran2 && ran2 == ran3 && ran3 == ran4) {
				chipovi += 80;
				cout << "Pobjedili ste!!!" << endl;
			}
			else {
				cout << "Pokusaj ponovo." << endl;
			}
		}
		else {
			info();
		}
	}
	else {
		info();
		cout << "Nemate dovoljno chipova..." << endl;
	}
}

void bacanje_kockica() {
	int izbor;
	cout << "------ Bacanje kockica -------" << endl;
	cout << "Jedno bacanje kosta 10 chipova...ali mozete osvojiti 30 chipova.." << endl;
	cout << "Izaberi: \n\t 1. Igraj\n\t 2. Izadi" << endl;
	cin >> izbor;

	if (chipovi >= 10) {
		if (izbor == 1) {
			srand(time(NULL));

			chipovi -= 10;

			int kockica_igrac;
			int kockica_komp;
			int zbroj_igrac = 0;
			int zbroj_komp = 0;

			for (int i = 0; i < 2; i++) {
				kockica_igrac = rand() % 6 + 1;
				cout << "Vasa kockica: " << kockica_igrac << endl;
				kockica_komp = rand() % 6 + 1;
				cout << "Kockica kuce: " << kockica_komp << endl;

				zbroj_igrac += kockica_igrac;
				zbroj_komp += kockica_komp;
			}

			if (zbroj_igrac > zbroj_komp) {
				cout << "Pobijedili ste !!! Rezultat: " << zbroj_igrac << " : " << zbroj_komp << endl;
				chipovi += 30;
			}
			else if (zbroj_komp > zbroj_igrac) {
				cout << "Izgubili ste. " << zbroj_igrac << " : " << zbroj_komp << endl;
			}
			else {
				cout << "Nerijeseno !!! Ali svejedno ste izgubili :)" << zbroj_igrac << " : " << zbroj_komp << endl;
			}
		}
		else {
			info();
		}
	}
	else {
		info();
		cout << "Nemate dovoljno chipova..." << endl;
	}
}

void duplo_nista() {
	
	cout << "------ Duplo ili nista --------" << endl;
	cout << "Jedno izvlacenje karte kosta 10 chipova...ali mozete osvojiti 40 chipova.." << endl;
	cout << "Izaberi: \n\t 1. Igraj\n\t 2. Izadi" << endl;
	int izbor;
	cin >> izbor;
	
	if (izbor == 1) {

		string boje[4] = { "pik", "herc","tref","karo" };
		char karte[13] = { 'A','K','Q','J','10','9','8','7','6','5','4','3','2' };

		srand(time(NULL));

		int ran1 = rand() % 4 + 1;
		int ran2 = rand() % 13 + 1;

		cout << "Vasa karta je " << karte[ran2] << " " << boje[ran1] << endl;
		cout << "Karta kuce je " << karte[ran2] << " " << boje[ran1] << endl;
	}
	else {
		info();
	}
}