

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <istream>
#include <fstream>

using namespace std;

// Globalne varijable

struct Pacijent
{
	int broj_pacijenta;
	string ime;
	string prezime;
	vector<string> ljekovi;
};

void start();
void unos_pacijenta();
void ispis_pacijenta();
//void ucitavanje_pacijenata(vector<Pacijent> &pacijenti);

int main()
{
	//vector<Pacijent> pacijenti;
	//ucitavanje_pacijenata(pacijenti);
	start();
	int unos;
	cin >> unos;


	do {
		switch (unos) 
		{
		case 1:
			// Unos pacijenta
			unos_pacijenta();
			break;
		case 2:
			// Ispis pacijenta
			ispis_pacijenta();
			system("PAUSE");
			break;
		case 3:
			// pretraga pacijenta

			break;
		case 4:
			// sustav cekaonice
			break;
		case 5:
			// Dodavanje recepata
			break;
		case 6:
			// Izlaz
			break;
		}
	} while (unos != 6);



}

void start() {
	system("cls");
	cout << "\t\t-- Ordinacija Dr. Jere -- " << endl;
	cout << "\t\t--------------------------" << endl;
	cout << "\n Odaberite opciju:\n";
	cout << "\t 1. Unos novih pacijenata u kartoteku" << endl;
	cout << "\t 2. Ispis svih pacijenata" << endl;
	cout << "\t 3. Pretraga pacijenata po MBO" << endl;
	cout << "\t 4. Sustav cekaonice: \n\t\t 1. Prijava \n\t\t 2. Odjava" << endl;
	cout << "\t 5. Dodavanje recepata za lijekove na korisnicki racun" << endl;
	cout << "\t 6. Izlaz" << endl;
}

void ucitavanje_pacijenata(vector<Pacijent> &pacijenti) {

	vector<string> lista_pacijenata;
	ifstream ispis;

	string line;
	ifstream ispis("kartoteka.txt");

	if (ispis) {
		do {
			Pacijent pacijenti;
			ispis >> pacijenti.broj_pacijenta >> pacijenti.broj_pacijenta >> pacijenti.prezime;
			lista_pacijenata.push_back(pacijenti);
		} while (getline(ispis, line));
	}
	
	 
	ispis.close();
}

void unos_pacijenta() {

	string mapa_pacijenta;
	string lijek;
	int izbor;
	Pacijent novi_pacijent;
	
	

	system("cls");
	cout << "Izaberite: " << endl;
	cout << "1. Unos pacijenta" << endl;
	cout << "2. Izlaz" << endl;
	cin >> izbor;
	system("cls");
	vector<int> mbo_pacijenata;

	if (izbor == 1)
	{
		cout << "Unesite MBO pacijenta: " << endl;
		cin >> novi_pacijent.broj_pacijenta;
		cin.ignore();
		
		for (int i = 0; i < mbo_pacijenata.size(); i++) {
			if (novi_pacijent.broj_pacijenta == mbo_pacijenata[i]) {
				cout << "Pacijent vec postoji !" << endl;
				system("PAUSE");
				unos_pacijenta();
			}
		}
		
		mbo_pacijenata.push_back(novi_pacijent.broj_pacijenta);

		cout << "Unesite ime pacijenta: " << endl;
		getline(cin, novi_pacijent.ime);
		cout << "Unesite prezime pacijenta: " << endl;
		getline(cin, novi_pacijent.prezime);
		cout << "Unesite lijekove: \n-(za prekid unesite 0)" << endl;
		do {
			cin >> lijek;
			novi_pacijent.ljekovi.push_back(lijek);
		} while (lijek != "0");
		
		mapa_pacijenta = "\n " + to_string(novi_pacijent.broj_pacijenta) + " " + novi_pacijent.ime + " " + novi_pacijent.prezime;
	

		ofstream pacijenti;
		ofstream ljekovi;
		pacijenti.open("kartoteka.txt", ios::out | ios::app);
		pacijenti << mapa_pacijenta;
		ljekovi.open("ljekovi.txt", ios::out | ios::app);
		ljekovi << novi_pacijent.broj_pacijenta;

		for (int i = 0; i < novi_pacijent.ljekovi.size(); i++) {
			ljekovi << "\t" << novi_pacijent.ljekovi[i];
			pacijenti << "\t" << novi_pacijent.ljekovi[i];
		}

		pacijenti.close();
		ljekovi.close();

	}
	else if (izbor == 2) {
		main();
	}
	else {
		cout << "Unesite tocan izbor." << endl;
	}
}

void ispis_pacijenta() {
	int izbor;

	system("cls");
	cout << "Izaberite: " << endl;
	cout << "1. Ispis pacijenta" << endl;
	cout << "2. Izlaz" << endl;
	cin >> izbor;
	system("cls");

	if (izbor == 1) {
		vector<string> pacijenti;

		ifstream input("kartoteka.txt");
		string line;
		while (input) {
			getline(input, line);
			pacijenti.push_back(line);
		}
		input.close();

		for (int i = 0; i < pacijenti.size(); i++) {
			cout << pacijenti[i] << endl;
		}
	}
	else if (izbor == 2) {
		main();
	}
	else {
		cout << "Unesite tocan izbor." << endl;
	}
}

